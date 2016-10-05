#include <iostream>
using namespace std;

int main() {
	int t;cin>>t;
	while(t--){

        long long int s,v;cin>>s>>v;
        long int t = 2*s/(3*v);
        if(s!=0 && t==0){cout << "0.000001\n";}
	    else cout << t << endl;
    }
}
