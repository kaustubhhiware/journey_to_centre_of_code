#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
	long int i,n,m,x;
	cin >> n >> m;
	int a[n],b[m],da[m-1],db[m-1],batons = 0;

	for(i=0;i<n;i++)
	{
		cin>>a[i];
		batons += a[i];
	}

	if(m==1)
	{
		cin>>b[0];
		cout << batons<< "\n";
		exit(0);
	}
	for(i=0;i<m;i++)
	{
		cin >> b[i];
		if(i) d[i-1] = b[i] - b[i-1];
	}

	int dist = b[m-1] - b[0]+1;
	long int d[dist];
	for(i=0;i<dist;i++)
	{
		if(b[i])
	}
	/*cout << "batonsSpecial\n";
	for(i=0;i<n;i++)
	{
		cout << a[i]<<"\t";
	}
	cout << "\nbots dist\n";
	for(i=0;i<m-1;i++)
	{
		cout << d[i] << "\t";
	}
	cout<<"\n";*/
	for()

}