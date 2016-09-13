#include <iostream>
using namespace std;

void merge(long long int arr[],long int l,long int m,long int r)
{
   long int i, j, k;
   long int n1 = m - l + 1;
   long int n2 =  r - m;
 
    long long int L[n1], R[n2];
 
    for(i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for(j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
 
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 
void mergeSort(long long int arr[], long int l,long int r)
{
    if (l < r)
    {
        long int m = l+(r-l)/2; 
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}

int main()
{
    long int i,m,n;
    long long l;
    cin>>n>>l>>m;
    long long int a[n];
    for(i=0;i<n;i++){cin>>a[i];}
    //mergeSort(a,0,n-1);
    long int cut=0;i=0;
    
    while(a[i]<l+1){cut++;i++;}
    
    //simply select m elements from cut
    cout<<cut-m+1;
    
}

