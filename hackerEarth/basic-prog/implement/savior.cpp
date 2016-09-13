#include <iostream>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
    	long int n,i,j=0;cin>>n;
    	long long int a[n];
    	for(i=0;i<n;i++){cin>>a[i];}
    	long long int count=0;
    	for(i=0;i<n;i++)
    	{
    		for(j=i+1;j<n;j++)
    		{
    			if(a[i]!=a[j] && (a[i]+a[j])%2==0){count++;}
    		}
    	}
    	cout<<count<<endl;
    }
}
