#include<bits/stdc++.h>
using namespace std;
//All zeros on one side and all ones on other side can also be done by sort function and counting 0 and 1 but this is optimal approach
void sort01(int arr[],int n)
{
    int i=0;
    int j=n-1;
    while(i<j)
    {
        if(arr[i]==0)
        i++;
        else if(arr[j]==1)
        j--;
        else
        swap(arr[i++],arr[j--]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}
int main()
{
    int arr[]={0,1,0,1,1,1,1,0,0,0,0,1,0,1,0};
    int n=15;
    sort01(arr,n);
    return 0;
}