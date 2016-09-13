#include <iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	int m,i;
    	cin>>m;
    	if(m>10){continue;}
    	long long int len[m];int d[m];
    	
    	int sum = 0;
    	int prod = 0;
    	for(i=0;i<m;i++)
    	{
    		cin>>len[i]>>d[i];
    		if(d[i]==1||d[i]==2||d[i]==4||d[i]==5||d[i]==7||d[i]==8)
    		{
    			prod = (len[i]%9)*d[i];
    			sum += prod/10 + prod%10;
    			
    		}
    		else if(d[i]==3||d[i]==6)
    		{
    			prod = (len[i]%3)*d[i];
    			sum += prod/10+prod%10;
    			
    		}
    		else if(d[i]==9){sum += 0;}
    	}
    	sum = sum/100+sum/10+sum%10;
    	cout<<sum<<endl;
    }
    
}
