#include <stdio.h>

int main()
{
	int t,n,a[103],b[103],i;
	long int m,j;
	scanf("%d",&t);
	while(t>0)
	{
		scanf("%d %ld",&n,&m);
		for(i=0;i<n;i++)
		{
			scanf("%d ",&a[i]);
			b[i]=a[i];
		}
		int count=0;
		for(j=m;j>0 &&count!=n;j--)
		{
			count=0;
			for(i=0;i<n;i++)
			{
				b[0]=a[1];
				b[n-1]=a[n-2];
				if(i!=0 && i!=(n-1)) 
				{
					b[i]=a[i-1]*a[i+1];
				}
				count+=b[i];
			}
			for(i=0;i<n;i++)
			{
				a[i]=b[i];
			}
		}
		t--;
		for(i=0;i<n;i++)
		{
			printf("%d ",b[i]);
		}
		printf("\n");
		}
	return 0;
}


