#include <iostream>
using namespace std;

int main()
{
   long long int i,n,x;
   cin>>n>>x;
   long long int a[n];
   int isSkipped = 0;
   long long int longestStreak=0,streak=0;
   for(i=0;i<n;i++)
   {
   		cin>>a[i];
   		if(a[i]>x)
   		{
   			if(isSkipped==0){isSkipped=1;}
   			else{break;}
   		}
   		else
   		{
   			streak++;
   			if(streak>longestStreak){longestStreak++;}
   		}
   }
   cout<<longestStreak;
}
