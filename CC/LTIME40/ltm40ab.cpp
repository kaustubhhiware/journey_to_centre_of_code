#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t;cin>>t;
    while(t--)
    {
        long long int a,b,c,d,sum=0;
        cin>>a>>b>>c>>d;
        if(c<a){c=a;}
        sum = (c-a)*(d-c+1);
        if(a<c){a=c;}    
        if(b>d-1){b=d-1;}
        sum += (b-a+1)*(2*d-b-a)/2;
        cout<<sum<<endl;
    }
}
