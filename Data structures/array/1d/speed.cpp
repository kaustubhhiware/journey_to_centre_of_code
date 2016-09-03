#include <iostream>
using namespace std;

int main()
{
   int t;cin>>t;
   while(t--)
   {
   		long int i,n,count=0;cin>>n;
   		long long int a[n];
   		for(i=0;i<n;i++)
   		{
   			cin>>a[i];
   			if(i>0 && a[i]>a[i-1])
   			{
   				a[i] = a[i-1];
   			}
   			else
   			{
   				count++;
   			//cout <<i<<" is fast!"<<endl;
   			}
   		}
   		cout<<count<<endl;
   	
   }
}
