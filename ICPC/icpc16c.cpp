#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define ff first
#define ss second
#define pub push_back

using namespace std;

typedef pair<int,int> ii;
typedef pair<int,ii> iii;
typedef pair<ii,ii> pii;
typedef std::vector<int> vi; 
typedef std::vector<ii> vii; 


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  	
 	int t;	cin >> t;

 	while(t--){
 		ll sum = 0,d,ans = 0,c = 1,i;	cin >> d;
 		vector<ll>num;

 		while(d > 9){
 			num.push_back(9);
 			d -= 9;
 		}

 		num.push_back(d);

 		for(i = 0;i < num.size();i++){
 			sum += (num[i] + c)%10;
 			c = (num[i] + c)/10;
 			// cout << num[i] << " ";
 		}
 		sum += c;
 		cout << sum << "\n";
 	}   
  	
    return 0;
}