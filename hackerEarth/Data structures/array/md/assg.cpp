#include <iostream>
using namespace std;

int main()
{
    long int i,j,n,q,qi;
    cin>>n>>q;
    int a[n][n];
    string str;
    cin>>str;
    int k=1;
    for(i=0;i<n-1;i++)
    {
    	a[i][i]=1;
    }
    for(k=1;k<n;k++)
    {
	    for(i=0;i<n;i++)
	    {
	    	for(j=i+1;j<i+k+1;j++)
	    	{
	    		if(str[j]>str[i])
	    		{
	    			a[i][j] = a[i][j-1];
	    			a[j][i] = a[j][i+1] + 1;
	    			
	    		}//a[i][j] stores the position of i in lexographic ordering from i to j
	    		else
	    		{
	    			a[i][j] = a[i][j-1] + 1;
	    			a[j][i] = a[j][i+1];
	    		}
	    	}
	    }
    }
    int L,R,K;
    for(qi=0;qi<q;qi++)
    {
    	cin>>L>>R>>K;
    	
    }
    
}
