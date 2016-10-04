#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
	
	int i,n;
	cin>>n;
	int last2,last;
	for(i=0;i<n-2;i++){cin>>last2;}
	if(n>1){cin>>last2>>last;}
	else cin>>last;
	if(n==1){cout<<"-1\n";}
	else{
		if(last2>last){
			if(last==0){cout<<"UP\n";}
			else cout<<"DOWN\n";
		}
		else{
			if(last==15){cout<<"DOWN\n";}
			else cout<<"UP\n";
		}
	}

}