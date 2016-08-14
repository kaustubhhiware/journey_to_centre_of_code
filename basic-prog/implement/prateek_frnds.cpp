#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	long int i,j,n;
    	cin>>n;
    	long int a[n];
    	long long int x,sum=0;
    	cin>>x;
    	i=0;j=0;
    	for(i=0;i<n;i++)
    	{
			cin>>a[i];
    	}
    	sum=a[0];i=0;
    	int found = 0;
		while(j>=i){

			if(sum<x)
			{
				j++;
				if (j == n ){
					break;
				}
				else{	
					sum += a[j];
				}
			}
			else if(sum>x)
			{
				i++;
				if(i==n){
					break;
				}
				else{
					sum -= a[i-1];
				}
			}
			else{
				found = 1;
				break;
			}

		}
		if(found==0){cout<<"NO\n";}
		else{cout<<"YES\n";}

    	
    }
}
