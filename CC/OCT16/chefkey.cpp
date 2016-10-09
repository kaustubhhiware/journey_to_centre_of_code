#include <iostream>
using namespace std;

int main() {
	int t;cin>>t;
	while(t--){
	    
	    long int n,m,c,a,b;
	    // a < b
	    cin>>n>>m>>c;
	    if(n<m){a=n;b=m;}
	    else{a=m;b=n;}
	    
	    long int count = 0;
	    for(long int i=a;i>0;i--){

    	  	if(c > i*b){break;}
    	    if(c%i==0){count++;}
    	}
	    
	    cout << count << endl;
	}
	
}
