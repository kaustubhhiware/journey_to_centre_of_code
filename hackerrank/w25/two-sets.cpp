#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int GCD(int n1,int n2)
{
    while(n1!=n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    return n1;
}

int LCM(int n1, int n2)
{
    return n1*n2/GCD(n1,n2);    
}

int main() {
    int i,j,m,n;
    cin>>n>>m;
    int x,y,lcm,gcd;
    cin >> lcm;
    for(i=0;i<n-1;i++)
    {
        cin>>x;lcm = LCM(lcm,x);
    }
    cin >> gcd;
    for(i=0;i<m-1;i++)
    {
        cin>>x;gcd = GCD(gcd,x);
    }    
    //cout << lcm <<"\t"<<gcd;
    int count=0;
    for(i=lcm;i<=gcd;i++)
    {
       if(i%lcm==0 && gcd%i==0) count++; 
    }
    cout<<count;
}
