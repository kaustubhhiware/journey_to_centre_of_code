#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
	
	long int i,n;
	cin>>n;
	string s;cin>>s;
	char lead= s[0];//cout<<lead<<endl;
	long int notlead=0,notunlead=0;
	for(i=0;i<n;i++)
	{
		//cout<<s[i]<<" with "<<lead[0]<<endl;
		if(i%2 && s[i]==lead){notlead++;}//cout<<"problem "<<s[i]<<"@"<<i<<endl;}
		
		else if((i%2==0) && s[i]!=lead){notunlead++;}//cout<<"problem "<<s[i]<<"@"<<i<<endl;}
	}
	long int count = (notlead < notunlead ) ? notunlead : notlead;
	//cout<<notlead<<"<"<<notunlead<<endl;
	cout<<count<<endl;

}