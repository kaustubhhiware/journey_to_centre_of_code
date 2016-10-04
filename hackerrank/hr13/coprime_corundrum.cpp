#include <bits/stdc++.h>
using namespace std;

long long f(long long int k){
    vector<long int > v;
    long long sum = 0;
    cout << k <<endl;
    for(long int i = 2; i < k+1; i++ ){
        if(k%i==0){
        	sum++;
        	cout <<"\tfactor"<<i<<endl;
        	k /= i;
        	while(k%i==0){cout <<"\t"<<k<<"\tfactor"<<i<<endl;k /= i;}
        }
        //v.push_back(p);
    }
    return sum/2;
   // for(it=myvector.begin() ; it < myvector.end(); it++,i++ ) {    }
    
}

int main() {
    long long int n;cin >> n;
    long long sum = 0;
    for(long long int k = 1; k < n+1 ; k++ ){
        sum += f(k);   
        cout << k <<"\t"<<f(k)<<endl; 
    }
    cout << sum<<endl;
}
