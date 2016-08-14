#include <iostream>
using namespace std;

string substring(char* s,long int i,long int j)
{
	long int k;
	char s2[j-i];
	for(k=i;k<j;k++)
	{
		s2[k-i]=s[k];
	}	
	return s2;
}

int isSorted(char* s, long int i,long int j)
{
	int haikya=0;
	long int k;
	for(k = i+1; k < j+1; k++ )
	{
		if(s[k]<s[k-1]){return haikya;}
	}
	haikya=1;
	return haikya;
}

int main()
{
    int t;cin>>t;
    while(t--)
    {
    	long int n,i,j;cin>>n;
    	char s[n+1];cin>>s;
		//cout<<s<<endl;
		long long int count=0;
    	for(i=0;i<n;i++)
    	{
    		for(j=i;j<n;j++)
    		{
    			if(isSorted(s,i,j)==1){count++;}
    		}
    		/*j=i+1;
			while(s[j]>s[j-1] && s[j]!='\0')
			{
				j++;count++;cout<<substring(s,i,j)<<" ya\n";
				if(j==n){break;}
			}    		
			cout<<substring(s,i,j)<<" na\n";*/
    	}
    //count+=n; 
    	cout<<count<<endl;
    	
    }
    
    
}
