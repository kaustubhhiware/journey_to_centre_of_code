#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i;
    
    int prod = 1;
    for (i=2;i<n+1;i++)
    {
    	prod = prod * i;
    }
    
    printf("%d",prod);
    
}
