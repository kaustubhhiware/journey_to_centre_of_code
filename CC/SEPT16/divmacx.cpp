#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int isPrime(long int y)
{
	for(long int i=2;i<=sqrt(y);i++)
	{
		if(y%i==0){return 0;}
	}
	return 1;
}


//now we have least prime divisors for all 1 - 1000
void print(long int *a,long int n)
{
	cout<<"+---Array\n";
	for(long int i=0;i<n;i++){cout<<a[i]<<" ";}
	cout<<endl;
}
long int leastPrimeDivisor(long int *x,int load,long int *LPD)
{
	if(LPD[*x]!=0)
	{
		if(load){*x /= LPD[*x];}
		return LPD[*x];
		cout<<"\nLPD bitch!\n";
	}
	if(isPrime(*x))
	{
		LPD[*x] = *x;
		if(load){*x /= LPD[*x];}
		return LPD[*x];
	}
	for(long int i = 2;i<sqrt(*x);i++)
	{
		if((*x)%i==0 && LPD[i]==i)//it means prime
		{
			LPD[*x] = i;
			if(!load){return LPD[*x];}
			*x /= i;load = 0;
			if(LPD[*x]!=0){return LPD[*x];}
			else if(isPrime(*x)){LPD[*x]=*x;return LPD[*x];}
			else{i--;}
		}
	}
}
/*
long int leastPrimeDivisor(long int *x,int load)
{
	if(LPD[*x]!=0)
	{
		if(!load){return LPD[*x];}
		else
		{
			*x /= LPD[*x];
			if(LPD[*x]!=0){return LPD[*x];}
		}
		cout<<"\nLPD bitch!\n";
	}
	if(*x==1)
	{
		LPD[*x]=1;
		return 1;
	}
	if(isPrime(*x))
	{
		LPD[*x] = *x;
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
			LPD[*x] = i;
			if(!load){return i;}
			else
			{
				*x = (*x)/i;
				//if(isPrime(*x)){return *x;}
				if(LPD[*x]!=0)
				{
					return LPD[*x];
					cout<<"\nLPD bitch!\n";
				}
				i--;load = 0;
			}
		}
	}
}
*/
void computeLPD(long int* a,long int l,long int r, long int *lpd,long int *LPD)
{
	for(long int i=l;i<r+1;i++)
	{
		if(lpd[i]==0)
		{
			lpd[i] = leastPrimeDivisor(&a[i],0,LPD);//
		}
	}
}

void update(long int*a,long int* lpd,long int l,long int r,long int *LPD)
{
	for(long int i=l;i<r+1;i++)
	{
		//lpd[i] = leastPrimeDivisor(&a[i],1);
		if(LPD[i]!=0)
		{
			a[i] /= lpd[i];
			lpd[i] = leastPrimeDivisor(&a[i],0,LPD);
		}
		else
		{
			lpd[i] = leastPrimeDivisor(&a[i],1,LPD);
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
	long int LPD[100000] = {0};//store it for repeated elements
	LPD[0]=0;LPD[1]=1;
	for(long int k=2;k<1001;k++)
	{
		if(isPrime(k)){LPD[k]=k;}
		else
		{
			for(long int l=2;l<=sqrt(k);l++)
			{
				if(k%l==0 && isPrime(l)){LPD[k] = l;}
			}
		}
	}    
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
        		computeLPD(a,l,r,lpd,LPD);
        		cout<<get(a,lpd,l,r)<<" ";
        	}
        	else
        	{
        		update(a,lpd,l,r,LPD);
        		cout<<"stage "<<j<<endl;print(a,n);print(lpd,n);print(LPD,n);
        	}
 			
        }	
        cout<<endl;
    }
}
