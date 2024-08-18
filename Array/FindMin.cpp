#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int find_min(int arr[],int n)
{
    int mini=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(mini>arr[i])
        {
            mini=arr[i];
        }
    }
    return mini;
}
int main()
{
    int arr[]={50,20,40,70,10,80,2,3,4,5};
    int n=10;
    int ans =find_min(arr,n);
    cout<<"Minimum element is "<<ans<<endl;
    return 0;
}