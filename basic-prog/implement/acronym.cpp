#include <iostream>
using namespace std;

int main()
{
    
    int i,k,n;
    cin>>k;
    string d[k];
    for(i=0;i<k;i++)
    {
    	cin>>d[i];
    }
    
    cin>>n;
    string w[n];
    string s;
    char c;
    int j=0;
    int contains=0;
    for(i=0;i<n;i++)
    {
        contains=0;
    	cin>>w[n];
        cout<<w[n]<<endl;
        for(j=0;j<k;j++)
        {
            if(d[i]==w[n]){contains=1;break;}
        }
    	if(contains==1){continue;cout<<"fuck"<<w[n]<<endl;}
    	else{
    		c=(int)w[0][0]-'a'+26;
    		cout<<c<<endl;
    		if(s.length()==0){s=c;}
    		else{s = s+'/'+c;}
    	}
    }
    cout<<s;
    
    
}
