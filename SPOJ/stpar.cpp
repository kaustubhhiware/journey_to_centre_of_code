#include <bits/stdc++.h>
using namespace std; 
int main(){ 
    int n,i,peace=1,x; 
    cin >> n;
    while(n){
        peace = 1;
        stack<int> s; vector<int> v; 
        for(i=0;i<n;++i){ 
            cin >> x; 
             while(s.size() && s.top()<x){
                v.push_back(s.top());
                s.pop(); 
            } 
            s.push(x);
        }
        
        while(s.size()){
            v.push_back(s.top());
            s.pop();
        }
        for(i=0;i<v.size();++i){
            if(v[i]!=i+1){
                peace=0;
                break;
            }            
        }
        if(peace) cout << "yes\n";
        else cout << "no\n";
        cin >> n;
    } 
    return 0;
}