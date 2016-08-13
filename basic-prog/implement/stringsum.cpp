#include <iostream>
using namespace std;

int main()
{
   string s;
   cin>>s;
   int i;
   long int count=0;
   for(i=0;i<s.length();i++)
   {
   		count += s[i]-'a'+1;
   }
   
   cout<<count;
}
