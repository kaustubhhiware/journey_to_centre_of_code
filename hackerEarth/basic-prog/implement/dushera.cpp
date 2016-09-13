#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >>t;
    while(t--)
    {
    	long int k;
    	
    	int p;
    	cin>>p;
    	cin>>k;
    	int i;
    	for(i=1;i<p+1;i++)
    	{
    		cout <<i*(k+1)<<" ";
    		
    	}
    	cout <<endl;
    	
    }
}
