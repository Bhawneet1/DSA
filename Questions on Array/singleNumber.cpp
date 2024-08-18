#include<bits/stdc++.h>
using namespace std;
//all numbers twice and one number once therefore xor same cancel single left and( 0^any number = same number and num^num=0)
int find_unique(int arr[],int n)
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans^=arr[i];
    }
    return ans;
}
int main()
{
    int arr[]={10,10,20,20,30,30,40,40,60,60,80,80,50,70,70};
    int n=15;
    int ans=find_unique(arr,n);
    cout<<"Unique number is "<<ans<<endl;
    return 0;
}