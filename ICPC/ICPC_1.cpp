#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int x1,y1,x2,y2;
    while(t--)
    {
        cin>>x1>>y1>>x2>>y2;
        int m=x1-x2;
        int n=y1-y2;
        if(m!=0 && n!=0)
            cout<<"sad"<<endl;
        else
        if(m==0 && n>0)
            cout<<"down"<<endl;
        if(m==0 && n<0)
            cout<<"up"<<endl;
        if(n==0 && m>0)
            cout<<"left"<<endl;
        if(n==0 && m<0)
            cout<<"right"<<endl;
    }
}