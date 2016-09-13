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
        string s;
        cin>>s;
        long int i,l=s.length();
        long int sum = 0;
        for(i=0;i<l;i++)
        {
            sum+=s[i]-'0';
        }
        if(sum==1 || sum==l-1)
        {
            cout<<"Yes\n";
        }
        else cout<<"No\n";
    }
}
