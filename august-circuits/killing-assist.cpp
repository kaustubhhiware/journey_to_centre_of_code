#include <iostream>
using namespace std;

long int gcd(long int a,long int b)
{
	return b == 0 ? a : gcd(b, a % b);
}

int main()
{
    long int t,m,n;
    cin>>t;
    while(t--)
    {
    	cin>>n>>m;//m are unbiased
    	long int num=0,den=0;
    	num = 9*m;den = 8*n+m;
    	if(den==0){den=1;}
    	
    	long int gcder = gcd(num,den);
    	num = num/gcder;den=den/gcder;
    	cout<<num<<"/"<<den<<endl;
    }
}
