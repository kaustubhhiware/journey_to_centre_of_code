#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long modulo(long a, long b)
{
    long c = a-b;
    if(c<0){return -c;}
    return c;
}

long nCk(long n,long k)
{
    long fact = 1;
    for(long i=0;i<k;i++)
    {
        fact *= n-i;
    }
    for(long i=2;i<k+1;i++)
    {
        fact /= i;
    }
    return fact;
}
vector<int> combination;
vector<int> index;

int notIn(int j,const vector<int>& v)
{
    for(int i = 0;i < v.size(); ++i)
    {
        if(j==v[i]){return 0;}
    }    
    return 1;
}

long compute(const vector<int>& combination,const vector<int>& in,long a[],int n) {
    
    long sum = 0;
  for (int i = 0; i < combination.size(); ++i) 
  {
      for(int j=0;j < n;j++)
      {
          if(notIn(j,in))
          {
              sum += modulo(a[i],combination[i]);
          }
      } 
  }
   return sum;    
}

void go(int offset, int k,long a[], int n,long* minsum) {
  if (k == 0) {
    long sum = compute(combination,index,a,n);
    if(sum > *minsum)
    {
        *minsum = sum;    
    }
    return;
  }
  for (int i = offset; i <= n - k; ++i) {
    combination.push_back(a[i]);
    index.push_back(i);
    go(i+1, k-1,a,n,minsum);
    combination.pop_back();
     index.pop_back();
  }
}

int main() {
    int i,n,k;
    cin>>n>>k;
    long a[n],j,sum=0;
    long minsum=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        //sum += a[i];
    }
    // sum = sum/n;
    long iter = nCk(n,k);
    for(long j=0;j<iter;i++)
    {
       go(0,k,a,n,&minsum);
    }
    cout <<minsum;
    
}
