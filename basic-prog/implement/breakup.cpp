#include <iostream>
using namespace std;

int main()
{
    int i;
    string s;
    cin>>s;
    int count=0,len=s.length();
    for(i=0;i<len;i++)
    {
    	if(s[i]=='l' && count==0){count++;}
    	else if(s[i]=='o' && count==1){count++;}
    	else if(s[i]=='v' && count==2){count++;}
    	else if(s[i]=='e' && count==3){count++;break;}
    }
	if(count==4){cout<<"I love you, too!";}
	else{cout<<"Let us breakup!";}
	
	
}

