#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

	int t,tI;cin>>t;
	for( tI = 1 ; tI < t + 1 ; tI++ )
	{
		int r,i,j,c,rs,cs,s,sI;
		cin>>r>>c>>rs>>cs>>s;

		float p,q;cin>>p>>q;
		char x;
		int a[r][c]={0},b[r][c]={0};
		//a is attractoir presence
		//b is the probability of catching a monster at aij
		for(i = 0 ; i < r; i++ )
		{
			for( j = 0 ; j < c ; j++ )
			{
				cin>>x;
				if(x=='.'){b[i][j] = q;}
				else if(x=='A'){a[i][j] = 1; b[i][j] = p;}
			}
		}
		int up,down,left,right;
		double y;//num monsters caught
		for( sI = 0 ; sI < s; sI++ )
		{
			up = rs-1;down = rs+1;left=cs-1;right=cs+1;


		}



		cout<<"Case #"<<tI<<"#: "<<y<<endl;

	}

}