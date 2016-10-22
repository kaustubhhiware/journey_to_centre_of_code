#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
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

		int beautiful = 1;
		int maxcount = 0,mincount=0;
		if(min < 0 && max > 1){}
		for( i = 0; i < n; i++)
		{
			if(a[i]==max) 
			{
				if (maxcount==0)
				{
					maxcount++;
				}
				else
				{
					beautiful = 0;
					break;
				}
			}
			else
			{
				if(a[i]!=0 && a[i]!=1)
				{
					beautiful = 0;
					break;
				}
			}
		}

		if(beautiful){cout<<"yes\n";}
		else cout<<"no\n";

	}

}