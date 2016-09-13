#include <iostream>
using namespace std;

int main()
{
   long int i,n;
   cin>>n;
   long long int dom[n],bri[n];
   long long int domdiff = 0,bridiff = 0;
   long long int diff=0;
   cin>>dom[0];
   for(i=1;i<n;i++)
   {
   		cin>>dom[i];
   		diff = dom[i]-dom[i-1];
   		if(diff<0){diff *= -1;}
   		if(domdiff<diff){domdiff = diff;}
   }
   cin>>bri[0];
   for(i=1;i<n;i++)
   {
   		cin>>bri[i];
   		diff = bri[i]-bri[i-1];
   		if(diff<0){diff *= -1;}
   		if(bridiff<diff){bridiff = diff;}
   }
   if(domdiff<bridiff){cout<<"Brian"<<endl<<bridiff;}
   else if(domdiff>bridiff){cout<<"Dom"<<endl<<domdiff;}
   else{cout<<"Tie"<<endl<<domdiff;}
}
