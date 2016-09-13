#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100];
    
    int i,len=0;
    scanf("%d",str1);
    for(i=0;str1[i]!='\0';i++)
    {
    	len++;
    }
    //copy to actual string
    char str[len];
    for(i=0;i<len;i++)
    {
    	str[i]=str1[i];
    }
    
	for(i=0;i<len;i++)
	{
		if(str[i]!=str[len-1-i])
		{
			printf("NO");
			exit(0);
		}	
	}
	printf("YES");
}
