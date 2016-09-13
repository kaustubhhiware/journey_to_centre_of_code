#include <iostream>
using namespace std;

int isPal(long int n)
{
	int power=0;
	int i,len;
	//long int n2=n;
	//while(n2){power++;n2 /= 10;}
	string s = to_string(n);
	len = s.length();
	for(i=0;i<len;i++)
	{
		if(s[i]!=s[len-1-i]){return 0;}
	}
	return 1;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	long int i,a,b,count=0;
    	cin>>a>>b;
    	for(i=a;i<b+1;i++)
    	{
    		if(isPal(i)==1)
    		{
    			count++;
    			//cout<<"Palindrome : "<<i<<endl;
    		}
    	}
    	cout<<count<<endl;
    }
}
