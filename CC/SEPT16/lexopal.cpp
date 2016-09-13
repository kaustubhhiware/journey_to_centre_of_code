#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


string correctStr(string s) {

    long int i,l = s.length();
    string neg = "-1";
    for(i=0;i<=l/2;i++)
    {
        if(s[i]!='.' && s[l-i-1]!='.')
        {
            if(s[i]!=s[l-1-i]) return neg;
        }
        else if(s[i]!='.' && s[l-i-1]=='.'){s[l-i-1] = s[i];}
        else if(s[i]=='.' && s[l-i-1]!='.'){s[i] = s[l-i-1];}
        else{s[i] = 'a';s[l-i-1]='a';}
    }
    return s;
}
int main() {
    int t;cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<correctStr(s);
        cout<<endl;
    }
}
