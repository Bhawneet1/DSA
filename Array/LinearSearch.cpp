#include<iostream>
using namespace std;
//O(n) as loop takes O(n)time
int linear_search(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        return i;
    }
    return -1;
}
int main()
{
    int array[]={10,20,30,40,50,60,70,80};
    int ans=linear_search(array,8,90);
    if(ans!=-1)
    {
        cout<<"Found at position "<<ans<<endl;
    }
    else
    {
        cout<<"Not Found "<<endl;
    }
    return 0;
}