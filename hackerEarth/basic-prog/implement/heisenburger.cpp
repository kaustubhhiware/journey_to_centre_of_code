#include <iostream>
using namespace std;

int main()
{
    int i,n,k;
    cin>>n;
    
    string s[n];
    int len=0;
    for(i=0;i<n;i++)
    {//cout<<"HI "<<i<<endl;
        cin>>s[i];
        //cout<<s[i]<<endl;
        if(i==0){len=s[i].length();}//cout<<len;}
        else
        {k=0;
            while(s[i-1][s[i-1].length()-1-k]==s[i][k] && k!=s[i].length())
            {
                k++;
            }
            len += s[i].length()-k;//cout<<len;
        }
    }
    cout<<len;
}
