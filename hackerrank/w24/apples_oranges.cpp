#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long int s,t,a,b,m,n;
    cin>>s>>t;
    cin>>a>>b;
    long int sa = s-a,ta=t-a;
    long int so = s-b,to=t-b;
    cin>>m>>n;
    long int i,d,apples=0,oranges=0;
    for(i=0;i<m;i++){
        cin>>d;
        if(d>=sa && d<=ta) apples++;
    }
    for(i=0;i<n;i++){
        cin>>d;
        if(d>=so && d<=to) oranges++;
    }
    cout<<apples<<endl<<oranges<<endl;
}
