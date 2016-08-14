#include <iostream>
using namespace std;
//Moriarty is a monster, monsieur
int main()
{
    int d,y;
    string m;
    int t;cin>>t;
    while(t--)
    {
    	cin>>d>>m>>y;
    	if(d>1){d--;}
    	else if(m=="January")
    	{d=31;m="December";y--;	}
    	else if(m=="February")
		{d=31;m="January";}
		else if(m=="March")
		{d = 28;m="February";
			if(y%4==0){d++;}}
		else if(m=="April")
		{d=31;m="March";}
		else if(m=="May")
		{d=30;m="April";}
		else if(m=="June")
		{d=31;m="May";}
		else if(m=="July")
		{d=30;m="June";	}
		else if(m=="August")
		{d=31;m="July";}
		else if(m=="September")
		{d=31;m="August";}
		else if(m=="October")
		{d=30;m="September";cout<<d<<m<<y;}
		else if(m=="November")
		{d=31;m="October";cout<<d<<m<<y;}
		else if(m=="December")
		{d=30;m="November";}
		cout<<d<<" "<<m<<" "<<y<<endl;
   	}
}
    

