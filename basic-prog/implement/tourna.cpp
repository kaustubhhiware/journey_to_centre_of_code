#include <iostream>
using namespace std;

int main()
{
    long int i,j,n,x,q;
    cin>>n>>q;
    long long int a[n];//,sum=0;
    for( i = 1 ; i < n+1 ; i++ )
    {
    	cin>>a[i];	
    	//sum += a[i];
    }
    long int match[n];
    for(i=1;i<n+1;i++){match[i]=0;}

	while(1)
	{
   		for( i = 1; i < n+1; i++)
    	{
    		if(a[i]==0){continue;}//no point in seeing ith if out of competition
    		
    		j=i+1;//find next fighter still in the game
    		while(a[j]==0){j++;}
    		if(j==n+1){break;}
    		match[j]++;match[i]++;
    		if(a[i]>a[j]){a[j]=0;}//reduce strength of defeated to 0
    		else{a[i]=0;}
    		i=j;
    	}
    	//stop when only one fighter remains
    	int alive=0;
    	for(i=0;i<n;i++)
    	{
    		if(a[i]!=0){alive++;}
    		if(alive>1){break;}
    	}
    	if(alive<2){break;}
	}    
    for( i = 0 ; i < q; i++ )
    {
    	cin>>x;
    	cout<<match[x]<<endl;
    }
    
    
}
