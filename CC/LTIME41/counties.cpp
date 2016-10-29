#include <iostream>
using namespace std;
#define INF 99999
#define V 6
void printSolution(long int dist[][V])
{
    cout <<"shortest dist\n";
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            if (dist[i][j] == INF)
                cout<<"INF\t";
            else
                cout<<dist[i][j]<<"\t";
        }
        cout<<endl;
    }
}

int main() {
	
	long long int i,j,k,n,m,q;cin>>n>>m;
	int county[n];
	for(i=0;i<n;i++)
	{
	    cin>>county[i];
	}
    
    long int dist[n][n];
    //long int dist[n][V];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++){dist[i][j]=INF;}
    }
    for(k=0;k<n-1;k++)
    {
        cin>>i>>j;
        dist[i-1][j-1]=1;dist[j-1][i-1]=1;
    }
    //cout<<"original\n";
   // printSolution(dist);
    //floyd warshall
    for (k = 0; k < n; k++)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (dist[i][k] + dist[k][j] < dist[i][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }
   // printSolution(dist);
    
    cin>>q;
    long int c,v;
    long int min;
    for(k=0;k<q;k++)
    {
        min = INF;
        cin>>v>>c;
        v--;
        for(i=0;i<n;i++)
        {
            if(county[i]==c && dist[i][v]<min) min = dist[i][v];
        }
        cout<<min<<endl;
    }

    
    
}