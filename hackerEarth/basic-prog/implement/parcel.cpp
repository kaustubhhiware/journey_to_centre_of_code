#include <iostream>
using namespace std;

int main()
{
   int n;
   cin>>n;
   string s;
   cin>>s;
   int i,numb=0;
   int len=s.length();
   for(i=0;i<len;i++)
   {
   		if(s[i]=='b')
   		{
   			numb++;
   		}
   }
   int lim = n/numb+1;
   int remain = n;
   int alive[n];
   for(i=1;i<n+1;i++){alive[i]=1;}
   if(n%numb==0){lim = lim-1;}
   //cout <<lim;
   int j=0,k=1;
   for(i=0;i<lim;i++)
   {
		for(j=0;j<len && remain > 1;j++)
		{
			if(s[j]=='b')
			{
				if(alive[k]=0)
				{
					while(alive[k]==0){k++;}
				}	
				alive[k]=0;remain--;
			}
			k++;
			if(k>n){k=1;}
		} 	
   }
   int jinda =1;
   for(i=1;i<n+1;i++){if(alive[i]==1){jinda=i;}}
   cout<<jinda;
}
