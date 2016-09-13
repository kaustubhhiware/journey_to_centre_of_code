#include <iostream>
using namespace std;

int main()
{
    string dir;
    cin>>dir;
    int x=0;
    int y=0;
    int len=dir.length();
    for(int i=0;i<len;i++)
    {
    	if(dir[i]=='L'){x--;}
    	else if(dir[i]=='R'){x++;}
    	else if(dir[i]=='U'){y++;}
    	else if(dir[i]=='D'){y--;}
    }
    cout<<x<<" "<<y;
}
