#include <iostream>
using namespace std;

int main()
{
   int t;cin>>t;
   int count=0;
   while(t--)
   {
	   	string str;
	   	cin>>str;
	   	
	   	long int i,l=str.length();
	   	int disrupted = 0;
	   	char c=str[0];
	   	for(i=0;i<l-1;i++)
	   	{
	   		if(str[i]==c && disrupted==0){;}
	   		else if(str[i]!=c && disrupted==0){disrupted = 1;}
	   		else if(str[i]==c && disrupted==1){disrupted=2;}
	   		else if(str[i]!=c && disrupted==1){disrupted=0;}
	   		else if(str[i]==c && disrupted==2){disrupted=1;}
	   		else if(str[i]!=c && disrupted==2){disrupted=3;break;}
	   	}
	   	if(disrupted<2){count++;}
		   	
	}
	cout<<count;
}
