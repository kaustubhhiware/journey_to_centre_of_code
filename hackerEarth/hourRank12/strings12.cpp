#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int find_a(string s,int len)
{
    int c=0;
    for(int i=0;i<len;i++)
    {
        if(s[i]=='a'){c++;}
    }
    return c;
}

int main(){
    string s;
    cin >> s;
    long n;
    cin >> n;
    int len = s.length();
    int num_a = find_a(s,len);
    long num = num_a*(n/len)+find_a(s,n%len);
    
    cout <<num;
}
