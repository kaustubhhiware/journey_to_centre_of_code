#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,c;
	cin>>a>>b>>c;
	int p,q,r;//order of greatness
    p = a; q = b; r = c;
	if (a < b){
	    if(c < a){
	        p = c;q=a;r=b;
	    }
	    else if( c < b ){
	        q = c;r = b;
	    }
	}
	else{
	    p = b;q = a;
	    if(c < b){
	        p = c;q = b; r = a;
	    }
	    else if(c<a){
	        q = c; r = a;
	    }
	}
	//get p < q < r
	//cout << p <<"<" << q <<"<"  << r <<"<" ;
/*	int xmin = q,dmin = r-p;
	for(int i=p;i<q+1;i++){
	    int d = -p+q+r-i;
	    if(d<dmin){
	        dmin = d;xmin=i;
	    }
	    else{
	        break;
	    }
	}
	for(int i=q+1;i<r+1;i++){
	    int d = i-p-q+r;
	    if(d<dmin){
	        dmin = d;xmin=i;
	    }
	    else{
	        break;
	    }
	}
	cout << dmin;
  */
  cout << r-p;
}
