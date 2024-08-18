#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//O(n) as loop takes n+1 operations
int find_max(int arr[],int n)
{
    int maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(maxi<arr[i])
        {
            maxi=arr[i];
        }
    }
    return maxi;
}
int main()
{
    int arr[]={56,19,50,70,30,80,100,40};
    int ans=find_max(arr,8);
    cout<<"Max element is "<<ans<<endl;
}