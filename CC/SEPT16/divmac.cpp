#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
 
void print(long int *a,long int n)
{
	cout<<"+---Array\n";
	for(long int i=0;i<n;i++){cout<<a[i]<<" ";}
	cout<<endl;
}
 
int isPrime(long int y)
{
	for(long int i=2;i<=sqrt(y);i++)
	{
		if(y%i==0){return 0;}
	}
	return 1;
}
 
long int leastPrimeDivisor(long int *x,int load)
{
	if(*x==1)
	{
		return 1;
	}
	if(isPrime(*x))
	{
		if(!load){return *x;}
		else
		{
			*x = 1;
			return 1;
		}
	}//correct hai abhi
	for(long int i = 2;i<=sqrt(*x);i++)
	{
		if((*x)%i==0 && isPrime(i))
		{
			if(!load){return i;}
			else
			{
				*x = (*x)/i;
				if(isPrime(*x)){return *x;}
				i--;load = 0;
			}
		}
	}
}
 
void computeLPD(long int* a,long int l,long int r, long int *lpd)
{
	for(long int i=l;i<r+1;i++)
	{
		if(lpd[i]==0)
		{
			lpd[i] = leastPrimeDivisor(&a[i],0);//
		}
	}
}
 
void update(long int*a,long int* lpd,long int l,long int r )
{
	for(long int i=l;i<r+1;i++)
	{
		//lpd[i] = leastPrimeDivisor(&a[i],1);
		if(lpd[i]!=0)
		{
			a[i] /= lpd[i];
			lpd[i] = leastPrimeDivisor(&a[i],0);
		}
		else
		{
			lpd[i] = leastPrimeDivisor(&a[i],1);
		}
	}
}
 
long int get(long int*a,long int* lpd,long int l,long int r)
{
	long int result = 1;
	for(long int i=l;i<r+1;i++)
	{
		if(lpd[i]>result){result = lpd[i];}
	}	
	return result;
}
 
int main() {
    int t;cin>>t;
    while(t--)
    {
        long int n,m,i,j,l,r;cin>>n>>m;
        long int a[n],lpd[n];
        int op;
        for(i=0;i<n;i++){cin>>a[i];lpd[i]=0;}
        for(j=0;j<m;j++)
        {
        	cin>>op>>l>>r;
        	l--;r--;
 
        	if(op)
        	{
        		computeLPD(a,l,r,lpd);
        		cout<<get(a,lpd,l,r)<<" ";
        	}
        	else
        	{
        		update(a,lpd,l,r);
        		//cout<<"stage "<<j<<endl;print(a,n);print(lpd,n);
        	}
 			
        }	
        cout<<endl;
    }
}