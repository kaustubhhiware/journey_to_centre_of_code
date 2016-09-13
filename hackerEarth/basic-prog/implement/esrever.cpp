#include <iostream>
using namespace std;

long int get_reverse(long long int n)
{
	string ns;
	ns=to_string(n);
	int i,dig;
	int l = ns.length();
	long long int n2=0;
	for(i=0;i<l;i++)
	{
		dig = ns[l-1-i]-'0';
		if(dig==0){continue;}
		else{n2 = 10*n2+dig;}
	}
	return n2;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	long int a,b,a2=0,b2=0,sum=0,sum2=0;
    	cin>>a>>b;
    	int i;
    	a2 = get_reverse(a);
    	b2 = get_reverse(b);
    //	cout<<a2<<" "<<b2<<endl;
		sum2 = a2+b2;    
    	sum = get_reverse(sum2);
    	cout<<sum<<endl;
    	
    }
    
    
}
