#include <iostream>
using namespace std;

int main() {
	
	long int t;cin >>t;
	while(t--)
	{
	    int i=0;
	    long long int a[9];
	    for(i=0;i<9;i++) cin>>a[i];
	    
	    long long int rowMax = 0,x;
	    for(i=0;i<3;i++)
	    {
	        x = a[i*3]+a[3*i+1]+a[3*i+2];
	        //cout<<"t"<<i<<"="<<x<<endl;
	        if(x>rowMax) rowMax = x;
	    }
	    for(i=0;i<3;i++)
	    {
	        x = a[i]+a[i+3]+a[i+6];
	         //cout<<"c"<<i<<"="<<x<<endl;
	        if(x>rowMax) rowMax = x;
	    }
	    if (rowMax && rowMax%2==0) rowMax--;
	    cout<<rowMax<<endl;
	}
}
