#include <stdio.h>

int main()
{
    char s[100];
    int i,l;
    l=0;
    for(i=0;i<100;i++)
    {
    	if(s[i]=='\0')
    	{
    		l = i;
    		break;
    	}
    }
    
    for(i=0;i<l;i++)
    {
    	if(s[i]-'a'>25)
    	{
    		//caps to small
    		s[i] = s[i] -26;
    		printf("%s",s[i]);
    	}
    	else{
    		s[i] = s[i]+26;
    		printf("%s",s[i]);
    	}
    	
    	
    }
	
	
	
	
	
}

