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
    	int opt=0;
    	int i=4;
    	while(s[i]!='.')
    	{
    		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){i++;continue;}
    		else{opt++;}
    		i++;
    	}
    	opt += 4;
    	
    	cout<<opt<<"/"<<s.length()<<endl;
    }
    
}