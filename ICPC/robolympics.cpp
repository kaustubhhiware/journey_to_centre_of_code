#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
	long int i,n,m;
	cin >> n >> m;
	int a[n];						//special or not
	long int b[m];					//position of each bot
	std::vector<long int> v;		//vector of indices of batons
	long int dbot[m-1];
	long int batons = 0;
	long int cheer = 0;

	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]){	v.push_back(i);	}
	}
	for(i=0;i<m;i++)
	{
		cin>>b[i];
		if(i>0){	dbot[i-1] = b[i] - b[i-1];	}
	}
	//dbot[m-1] = b[0] - b[m-1] + n;

	long int dbaton[v.size()];
	//cout<<"indices of batons\n";
	for(i=0;i<v.size();i++)
	{
		//cout<<v[i]<<"\t";
		if(i!=v.size()-1) dbaton[i] = v[i+1] - v[i];
	}
	dbaton[v.size()-1] = v[0] - v[v.size()-1] + n;
	cout<<"\ndistances between batons\n";
	for(i=0;i<v.size();i++)
	{
		cout<<dbaton[i]<<"\t";
	}


	cout<<"\ndistancs to next bot\n";
	for(i=0;i<m-1;i++)
	{
		cout<<dbot[i]<<"\t";
	}
	cout<<"\n";
	/*long int t=0;//time
	long int allSet = 0;
	for(t=0;t<n;t++)
	{
		allSet = 1;
		//first check if this config is special
		for(i=0;i<m;i++)
		{
			if(a[(b[i]+t)%n]==0)
			{
				allSet = 0;break;
			}
		}
		if(allSet)
		{
			cheer++;
			cout << "cheer at "<<t<<endl;
		}
		
	}*/
	cout << cheer<<endl;
}