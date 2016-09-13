#include <iostream>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
   		string s;
   		cin>>s;
   		int i;
   		int isPal=1;
   		int prod=1;
   		int len=s.length();
   		for(i=0;i<len;i++)
   		{
   			if(s[i]!=s[len-1-i] &&isPal==1){isPal=0;}
   			prod = prod*((int)s[i]-'a'+1);
   		}
   		if(isPal==1){cout<<"Palindrome"<<endl;}
   		else{cout<<prod<<endl;}
   	
   }
}
