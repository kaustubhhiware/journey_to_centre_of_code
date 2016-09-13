#include <stdio.h>
int fn(char string[],int L,int R,int K);
int main()
{ 
	int charSize,L,R,K,n,i,j;
	char string[50000];
	
	scanf("%d%d%s",&charSize,&n,string);
	int array[n][3];
	
	for(i=0;i<n;i++)
	for(j=0;j<3;j++)
	scanf("%d",&array[i][j]);
	
	for(i=0;i<n;i++)
	{
		L = array[i][0];
		R = array[i][1];
		K = array[i][2];
		j=fn(string,L,R,K);
		if(K>R-L+1 || K>charSize || L>charSize || R > charSize||j==0 )
		printf("Out of range\n");
		else 
		printf("%c\n",j);
	}
	return 0;	
}
int fn(char string[],int L,int R,int K)
{
	int j,x,a[26]={0};
	
	for(j=L-1;j<R;j++)
	a[string[j]-97]++;
	
	for(x=0;x<26;x++)
	if(a[x]>0)
	if(K<=a[x])
	return 97+x;
	else
	K-=a[x];
	
	return 0;
}