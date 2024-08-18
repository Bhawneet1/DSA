#include<bits/stdc++.h>
using namespace std;
//find all pairs in an array to get unique
//O(n^2) is complexity due to nested loops
void print_pairs(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)//we initialize from j=i+1 for unique pairs if we give j=0 we get duplicate pairs
        {
            cout<<"( "<<arr[i]<<" , "<<arr[j]<<" )"<<endl;
        }
    }
}
int main()
{
    int arr[]={10,20,30,40,50,60,70,80,90};
    int n=9;
    print_pairs(arr,n);
    return 0;
}