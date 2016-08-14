#include <iostream>
using namespace std;

int main()
{
    int kk;cin>>kk;
    while(kk--)
    {
    	int n,i,j;long int m,k;
    	cin>>n>>m;
    	string s[n],t[n];
    	for( i = 0 ;i < n ; i++ )
    	{
    		cin>>s[i];
    		if(i==0){t[i]=s[i];}
    		else
    		{
    			string temp=t[i-1];
    			t[i]=temp;
    			int li = temp.length();
    			for( j = 0; j < li; j++ )
    			{
    				t[i] += temp[li-1-j];
    			} 
    			t[i] += s[i];
    		}
    	}
    	int x;
    	string final=t[n-1];
    	for( k = 0;k < m; k++ )
    	{
    		cin>>x;
    		cout<<final[x];
    	}
    	cout<<endl;
    }
}
