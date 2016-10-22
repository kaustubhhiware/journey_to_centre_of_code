#include <bits/stdc++.h>
using namespace std;

int main()
{
	long int t; cin >> t;
	while(t--)
	{
		long int n,i; cin >> n;
		long long int a[n],max=0,min=1;
		for( i = 0; i < n; i++)
		{
			cin>>a[i];
			if(i==0){max = a[i];min=a[i];}
			if(a[i]>max){max = a[i];}
			if(a[i]<min){min = a[i];}
		}	
}