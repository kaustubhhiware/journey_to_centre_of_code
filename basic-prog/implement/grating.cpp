#include <iostream>
using namespace std;

int main()
{
    long int n,i;
    cin >>n;
    int a[n];
    int sum = 0;
    int greatest_so_far = 0;
    for(i=0;i<n;i++)
    {
    	cin>>a[i];
   		sum += a[i];
   		if (sum<0){sum=0;}
   		if(sum>greatest_so_far)
   		{
   			greatest_so_far = sum;
   		}
    }
    
    cout<<greatest_so_far;
}
