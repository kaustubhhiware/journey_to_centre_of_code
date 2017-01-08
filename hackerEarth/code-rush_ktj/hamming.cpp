#include <iostream>
#include <set>
#include <vector>
#include <math.h>
#include <string>
#include <stdio.h>
#include <stdlib.h>  
using namespace std;


// not accepted
//
bool isPrime (int num) {
    if (num <=1)
        return false;
    else if (num == 2)         
        return true;
    else if (num % 2 == 0)
        return false;
    else{
        bool prime = true;
        int divisor = 3;
        double num_d = static_cast<double>(num);
        int upperLimit = static_cast<int>(sqrt(num_d) +1);
        
        while (divisor <= upperLimit){
            if (num % divisor == 0)
                prime = false;
            divisor +=2;
        }
        return prime;
    }
}

int main() {
	long long int x,n,i,j;
	string st,str;
	cin>>st>>str;
	int f1 = st.find("X=");
	int f2 = str.find("n=");
    
	x = stoi(st.substr(f1+2));
	n = stoi(str.substr(f2+2));
	//cout << x <<","<< n<<"\n";

	set<unsigned> s;
	for(i=1;i<=n;i++) {
	    if(isPrime(i))  {
	         for(j=1;j<=x/i;j++) {
	             long long int k = i*j;
	             s.insert(k);
	             //cout << k <<" is good\n";
	         }
	    }
	}
	cout << s.size();

}
