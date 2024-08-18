#include<bits/stdc++.h>
using namespace std;
//O(n^2) because nested loops
void two_sum(int arr[],int n,int target)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==target)
            {
                cout<<"( "<<arr[i]<<" , "<<arr[j]<<" )"<<endl;
            }
        }
    }
}
//O(nlogn) time taken by sort function
void two_sum_optimal(int arr[],int n,int target)
{
    sort(arr,arr+n);
    int i=0;
    int j=n-1;
    
    while(i<j)
    {
        int sum1=arr[i]+arr[j];
        if(sum1<target)
        {
            i++;
        }
        else if(sum1>target)
        {
            j--;
        }
        else
        {
            cout<<"( "<<arr[i++]<<" , "<<arr[j--]<<" )"<<endl;
        }
    }
}
int main()
{
    int arr[]={10,5,20,15,30};
    int n=5;
    two_sum(arr,n,35);
    two_sum_optimal(arr,n,35);
    return 0;
}