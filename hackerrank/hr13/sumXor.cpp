#include <bits/stdc++.h>
using namespace std;


int main() {
    long n;cin >> n;
    long count = 0;
    long double log2 = log(n)/log(2);
    long logVal = ceil(log2);
    //cout << logVal<<" yeh\n";
    int b[logVal] = {0};
    int zero = 0;
    for(long i=0;i<logVal;i++)
    {
        b[i] = n%2;
        n /= 2;
        if(b[i]==0) zero++;
    }
    cout << pow(2,zero);
    
}