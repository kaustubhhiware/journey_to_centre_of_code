#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
/*
Fails for a=f(a) &&
a = f(b)
b = f(a)
Shows GOOD
*/
int main()
{
	int t,ti;cin>>t;
	for(ti=1;ti<t+1;ti++)
	{
		int i,num;cin>>num;
		std::vector<string> list;

		std::vector<string> lhslist;
		int guilt=0;
		for(i=0;i<num ;i++)
		{
			string str;
			//getline(cin,str);
			cin>>str;//cout<<"yea " <<str<<endl;

			int rhs=0;

			std::size_t pos = str.find('=');
			std::string lhs;
			if(pos)
			{
				lhs = str.substr(0,pos);
				lhslist.push_back(lhs);
				//cout<<"lhs :"<<lhs<<"<<"<<endl;
				std::size_t lbracket = str.find('(');
				std::size_t rbracket = str.find(')');
				std::string str2 = str.substr (lbracket+1,rbracket);
				//cout<<"vars "<<str2<<endl;
				while(1)
				{
					std::size_t comma = str2.find(',');
					if(comma==string::npos)
					{
						std::string var = str2.substr(0,str2.length()-1);
						//cout<<"var : "<<var<<endl;
						list.push_back(var);
						break;
					}
					else
					{
						std:string var = str2.substr(0,comma);
						///cout<<"var : "<<var<<endl;
						list.push_back(var);
						str2 = str2.substr (comma+1,rbracket);
					}
				}
			}

		}
		lhslist.push_back("");	
	/*	for (std::vector<string>::iterator it = list.begin() ; it != list.end(); ++it)
    	{
			cout<<*it<<"-";
    	}cout<<endl;
    	for (std::vector<string>::iterator it = lhslist.begin() ; it != lhslist.end(); ++it)
    	{	
    		cout<<*it<<"-";
    	}cout<<endl;
    */	int found;
		for (std::vector<string>::iterator it = list.begin() ; it != list.end(); ++it)
    	{
    		found=0;
			for (std::vector<string>::iterator it2 = lhslist.begin() ;it2 != lhslist.end(); ++it2) 
			{
				if(*it2==*it){found=1;}
			}
			if(!found){guilt=1;break;}
    	}
		if(guilt){cout<<"Case #"<<ti<<": BAD\n";}
		else{cout<<"Case #"<<ti<<": GOOD\n";}
	}

}