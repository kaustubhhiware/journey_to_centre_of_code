#include <iostream>
#include<string>
using namespace std;

//competition dated 25th Sept
//naive brute force algo
// runnning time 1.98 s / 2s

int areAll(int A[],int B[])
{
    int count=0;
    for(int i=0;i<26;i++)
    {
        if(A[i]||B[i])
        {
           count++;
        }
        else{return 0;}
    }
    return 1;
}
int main() {
    long int n1,n2,i,j;
    cin >> n1 >> n2;
    int c[n1+n2][26];
    
    string s;
    for(i=0;i<n1+n2;i++)
    {
        cin>>s;
        for(int l=0;l<26;l++){c[i][l]=0;}
        for( j=0;j<s.length();j++)
        {
            c[i][s[j]-'A'] = 1;
        }
        
    }
    
   /* for(i=0;i<n1+n2;i++)
    {
        
        for(int l=0;l<26;l++){cout<<c[i][l]<<" ";}
       cout<<endl;
        
    }*/    long int count=0;
    for(i=0;i<n1;i++)
    {
        for(j=n1;j<n2+n1;j++)
        {
            count += areAll(c[i],c[j]);
            //if(areAll(c[i],c[j])){cout<<i<<","<<j-n1<<endl;}
        }
    }
    
    cout<<count<<endl;
}