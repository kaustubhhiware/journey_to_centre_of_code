#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
	long int i,n,m,x;
	cin >> n >> m;
	int a[n],b[n],batons = 0;

	for(i=0;i<n;i++)
	{
		cin>>a[i];
		batons += a[i];
		b[i]=0;
	}

	for(i=0;i<m;i++)
	{
		cin >> x;
		b[x]=1;
	}

	/*cout << "batonsSpecial\n";
	for(i=0;i<n;i++)
	{
		cout << a[i]<<"\t";
	}
	cout << "\nbots\n";
	for(i=0;i<n;i++)
	{
		cout << b[i] << "\t";
	}
	cout<<"\n";
	*/
	for(i=0;i<n;i++)
	{
		if(a[i]==0) continue;

		//try matching this 
	}
}