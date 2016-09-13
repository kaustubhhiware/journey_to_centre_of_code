#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int howMany0(int* index,int max)
{
    int i,how=0;
    for(i=0;i<6;i++)
    {
        if(index[i]==0)
        {
            if(how==max){return 0;}
            how++;
        }
    }
    return 1;
}

int modifiedMin(int* index)
{
    int i,min=0;
    for(i=0;i<6;i++)
    {
        if(index[i] && min==0){min = index[i];}//set min as first non zero
        else if(index[i] && min>index[i]){min = index[i];}
    }
    for(i=0;i<6;i++)
    {
        if(index[i]!=0){index[i] -= min;}
    }    
    return min;
}

int count6(int* index)
{
    int i,count6 = 0;
    if(howMany0(index,0))
    {   //when all non zeroes
        count6 = modifiedMin(index);
    }
    return count6;
}

int count5(int* index)
{
    int i,j,count5 = 0;
    if(howMany0(index,1))
    {   //when all non zeroes
        count5 = modifiedMin(index);
    }
    return count5;
}

int count4(int* index)
{
    int i,j,count4 = 0;
    if(howMany0(index,2))
    {   //when all non zeroes
        count4 = modifiedMin(index);
    }
    return count4;
}

void printCount(int* counter)
{
    int i;
    cout<<endl;
    for(i=0;i<6;i++)
    {
        cout<<"+--- "<<i+1<<"\t"<<counter[i]<<endl;
    }
}

int main() {
    int t;cin>>t;
    while(t--)
    {
        int i,j,n;cin>>n;//cout<<"N = "<<n<<endl;
        int a[n],score[n];
        int maxscore = 0,tie=0,winner=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            score[i] = a[i];
            int counter[6]={0};//set all to 0            
            while(a[i]--)
            {
                //6 different types of candies , so assume this for now
                int index;cin>>index;
                counter[index-1]++;
            }
            score[i] += 4*count6(counter)+2*count5(counter)+count4(counter);
            if(score[i]>maxscore)
            {
                maxscore = score[i];winner=i;tie=0;
            }
            else if(score[i]==maxscore && score[i]!=0)//impossible ,still
            {
                tie = 1;
            }
        }
        if(tie==1){cout<<"tie\n";}
        else if(winner==0){cout<<"chef\n";}
        else{cout<<winner+1<<"\n";}
    }
}
