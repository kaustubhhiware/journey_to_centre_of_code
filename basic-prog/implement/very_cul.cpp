#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	long int r,k;
    	cin>>r>>k;
    	long int very_cul=0;
    	while(r--)
    	{
            cout<<r+1<<" yeah"<<endl;
    		long int n=r+1;
    		int two=2;
    		int coolness=0;
            if(n%4==1 && (n%4)<2 && n%2==1){coolness=1;}
    		while(n)
    		{     cout<<"\t"<<n<<endl;
    			if(n%two==1 && n%(2*two)==0 && n%(4*two)==1){coolness++;cout<<n<<"wow"<<endl;}
    			n = n/2;
    			two *= 2;
    		}
    		if(coolness>k-1){very_cul++;}
    	}
    	cout<<very_cul<<endl;
    }
}
