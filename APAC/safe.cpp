#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void print(int** a,long int r,long int c)
{
	//cout<<"+-- Array"<<endl;
	for(long int i = 0 ; i < r; i++)
	{
		for(long int j = 0; j< c; j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}cout<<endl;
}

int isSafe(int** m,long int i,long int j, long int size)
{
	long int k,l;
	for(k=i;k<i+size;k++)
	{
		for(l=j;l<j+size;l++)
		{
			if(m[k][l])
			{
				//cout<<"("<<k<<","<<l<<") is a bitch\n";
				return 0;
			}
		}
	}
	return 1;
}

long int safe( long int r,long int c, int** m, int** cont,long int size)
{
	long int i,j,count = 0;
	int next = 0;

	//cout<<"size of safe : "<<size<<endl;//print(cont,r,c);//print(m,r,c);
	for(i = 0;i < r-size+1 ; i++ )
	{	
		for( j = 0 ;j < c-size+1 ; j++ )
		{
			if(cont[i][j])
			{
				cont[i][j] = isSafe(m,i,j,size);
				if(cont[i][j])
				{
					count++;
				}
			}

		}
	}
	return count;

}


int main()
{
	int t,tI;cin>>t;
	for(tI = 1; tI < t + 1 ; tI++ )
	{
		long int r,i,j,c,k;
		cin>>r>>c>>k;

		int **m,**cont;
		m = new int *[r];cont = new int *[r];
		for( i = 0; i <r; i++)
	   	{	m[i] = new int[c];cont[i] = new int[c];
	   		for(j = 0 ; j < c ; j++)
	   		{cont[i][j] = 1;	}
		}
		
		//int m[r][c]={0},cont[r][c]={1};
		for(i = 0; i < k; i++)
		{
			long int rs,cs;cin>>rs>>cs;
			m[rs][cs] = 1;
			cont[rs][cs] = 1;
		}
		long int count = r*c-k;
		long int min = r;if(min>c){min = c;}
		//cout <<" max square size : "<<min<<endl;
		for( i = 2 ; i < min+1; i++ )
		{
			long int s = safe(r,c,m,cont,i);
			if(s) count += s;
			else break;
		}

		cout<<"Case #"<<tI<<": "<<count<<endl;

	}
}