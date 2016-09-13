#include <stdio.h>

int main()
{
    int l,n;
    scanf("%d",&l);
    scanf("%d",&n);
    
    int w[n];
    int h[n];
    int i;
    for(i=0;i<n;i++)
    {
    	scanf("%d%d",&w[i],&h[i]);
    } 
    
    for (i=0;i<n;i++)
    {
    	if (w[i]<l || h[i]<l)
    	{
    		printf("UPLOAD ANOTHER\n");
    	}	
    	else if(w[i]==h[i])
    	{
    		printf("ACCEPTED\n");
    	}
    	else
    	{
    		printf("CROP IT\n");
    	}
    }
    
	
	
}