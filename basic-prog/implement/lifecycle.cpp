#include <iostream>
using namespace std;

int codeDay(string day)
{
	int i,j=0,k=0;
	int today = 0;
	for(i=0;i<1440;i++)
	{
		if(day[i]=='C'){j++;}
		else
		{
			if(today<j-k)
            {
                today =j-k;
                //cout<<j<<" "<<k<<" "<<today<<" - "<<endl;
			}
			k=i;j=i;
		}
	}
	//cout<<"today v"<<today<<endl;
	return today;
	
}


int main()
{
    int n;
    cin >>n;
    long int i;
    char a[n][1440];
    long int daymax =0;
    int datemax=0;
    int todaymax = 0;
    for(i=0;i<n;i++)
    {
    	cin >>a[i];	
		//daily max
    	todaymax = codeDay(a[i]);
    	//cout<<"Day "<<i<<" time "<<todaymax<<endl;
    	if(daymax < todaymax)
    	{
    		daymax = todaymax;
    		datemax = i;
    	}
    }
    long int j=0;
    long int spree=0;
    long int maxspree = 0; 
    //overall max
    for(i=0;i<n;i++)
    {	
        for(j=0;j<1440;j++)
        {
    	   if(a[i][j]=='C'){spree++;//if(spree==1){cout <<"STart at "<<i<<","<<j<<"/";}
    	   }
    	   else
    	   {
    		  if(spree>maxspree){maxspree=spree;}//cout<<" upto "<<i<<","<<j<<"/"<<endl;
                                 //cout<<endl<<"MAX "<<maxspree<<endl;}
    		  spree = 0;
    	   }
        }
    }
    cout<<daymax<<" "<<maxspree<<endl;
    
    
}
