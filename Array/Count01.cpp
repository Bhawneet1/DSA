#include<iostream>
using namespace std;
pair<int,int>count01(int arr[],int n)
{
    int zcount=0;
    int ocount=0;
    pair<int,int> ans;
    //O(n) loop performs n+1 operations 
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            zcount++;
        }
        else if(arr[i]==1)
        {
            ocount++;
        }
    }
    ans.first=zcount;
    ans.second=ocount;
    return ans;
}
int main()
{
    int arr[]={0,1,1,1,1,1,1,0,0,1,1,0,0,0,0,1,0,1,0,1,0};
    int n=21;
    pair<int,int>c=count01(arr,n);
    cout<<"Zero count = "<<c.first<<endl;
    cout<<"One count = "<<c.second<<endl;
    return 0;
}