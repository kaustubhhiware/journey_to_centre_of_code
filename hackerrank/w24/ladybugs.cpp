#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int g;cin>>g;
    while(g--){
        int i,n;cin>>n;
        string b;cin>>b;
        
        int wrong=0;
        int num[27]={0};
        for(i=0;i<n;i++){
        
            if(b[i]=='_') num[26]++;
            else num[b[i]-'A']++;
        }
        
        for(i=0;i<26;i++){
            if(num[i]==1){ 
                wrong = 1;break;
            }
        }
        if(wrong) cout << "NO\n";
        else cout << "YES\n";
    }
}
