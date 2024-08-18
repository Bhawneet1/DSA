#include<bits/stdc++.h>
using namespace std;
void shift(int arr[],int n,int k)
{
    int finalShift=k%n;//if k>n then we need to use mod
    int temp[1000];
    int index =0;
    for(int i=n-finalShift;i<n;i++)//store first k elements in temporary array
    {
        temp[index]=arr[i];
        index++;
    }
    for(int i=n-1;i>=0;i--)
    {
        arr[i]=arr[i-finalShift];
    }
    for(int i=0;i<finalShift;i++)
    {
        arr[i]=temp[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}
void shift_2(int arr[],int n,int k)
{
    reverse(arr,arr+n);
    reverse(arr,arr+k-1);
    reverse(arr+k,arr+n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}
int main()
{
    int arr[]={10,20,30,40,50,60,70};
    int n=7;
    int k=3;//number of places to be shifted
    shift(arr,n,k);
    shift_2(arr,n,k);
    return 0;
}