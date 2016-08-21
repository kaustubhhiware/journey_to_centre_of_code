#include <iostream>
using namespace std;

long long int findNextEdge(int n,int i,int p[],int a[][n])
{
	long long int j;
	for(j=i+1;j<n;j++)
	{
		if( a[i][j]==1 && p[j]==0 )
		{
			p[j]=1;
			return j;
		}
	}
	return -1;
}

long long int findIsolated(int n,int p[],int a[][n])
{
	long long int j,i;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if( a[i][j]==1 && p[j]==0 )
			{
				p[j]=1;
				return j;
			}
		}
	}
	return -1;
}

int main()
{
   long long int n,m,i,j,j2,x,y,k,num_loop;
   cin>>n>>m;
   int a[n][n],p[n],t[n][3];
   for(i=0;i<n*n;i++){a[i/n][i%n]=0;p[i/n]=0;}
   
   for(i=0;i<m;i++)
  {
  	cin>>x;cin>>y;
  	a[x][y]=1;a[y][x]=1;
  }
  
  i=0;k=0;//k is nunmber of loop
  while(1)
  {
	  	j = findNextEdge(n,i,p,a);
	  	if(j==-1){break;}
		
		j2 = findIsolated(n,p,a);	
		if(j2==-1){break;}	
		t[k][0] = i+1;t[k][1] = j+1;t[k][2] = j2+1;
		i++;
  	
  }
  num_loop = k;
  k=0;
  cout<<num_loop<<endl;
  for(k=0;k<num_loop;k++)
  {
  	cout<<t[k][0]<<" "<<t[k][1]<<" "<<t[k][2]<<endl;
  }
  
  
}
