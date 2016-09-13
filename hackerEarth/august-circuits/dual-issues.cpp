#include <iostream>
using namespace std;


int primeCheck(int a)
{
	int i;
	if(a==1){return 0;}
	for(i=2;i<a;i++)
	{
		if(a%i==0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
    int t,n;cin>>t;
    while(t--)
    {
    	cin>>n;
		int i,x;

		int max_prime = 0 ;
		for(i=0;i<n;i++)
		{
			cin>>x;
			if(x>max_prime && primeCheck(x)==1)
			{

				max_prime = x;
			}
		}	
		if(max_prime==0){cout<<"-1"<<endl;}
		else{cout<<max_prime*max_prime<<endl;}
		
    }
}
