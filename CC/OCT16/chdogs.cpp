#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main() {
	int t;cin>>t;
	while(t--){

        long long int s,v;cin>>s>>v;
        double t = (double)(2*s)/(double)(3*v);
        if(s!=0 && t==0){cout << "0.000001\n";}
	    else printf("%.6lf\n",t);
   }
}