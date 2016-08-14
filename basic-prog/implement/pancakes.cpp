#include <iostream>
using namespace std;

int main()
{
    long long int x;
    cin>>x;
    long int i=1;
    while(x)
    {
        x -= i;
        if(x<1){cout<<"Darshak";break;}
        x -= i*i;
        if(x<1){cout<<"Chandan";break;}
        i++;
        
    }
    
}
