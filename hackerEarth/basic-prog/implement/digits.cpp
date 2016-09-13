#include <iostream>
using namespace std;

int main()
{
    int a[10];
    int i;
    for(i=0;i<10;i++){a[i]=0;}
    string n;
    cin >>n;
    int len = n.length();
    for(i=0;i<len;i++)
    {
    	if(n[i]>='0' && n[i]<='9')
    	{
    		a[n[i]-48]++;
    	}
    }
    
    for(i=0;i<10;i++)
    {
    	cout << i << " " <<a[i] <<endl;
    }
}
