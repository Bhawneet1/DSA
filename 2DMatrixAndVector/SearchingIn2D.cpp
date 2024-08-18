#include<bits/stdc++.h>
using namespace std;
pair<int,int> lsearch(int arr[][3],int r,int c,int target)
{
    pair<int,int> ans=make_pair(-1,-1);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(arr[i][j]==target)
            {
                ans.first=i;
                ans.second=j;
            }
        }
    }
    return ans;
}
int main()
{
    int arr[3][3]={{10,20,30},{40,50,60},{70,80,90}};
    int r=3;
    int c=3;
    pair<int,int>ans=lsearch(arr,r,c,60);
    if(ans.first!=-1)
    {
        cout<<"Found at position "<<"( "<<ans.first<<" , "<<ans.second<<" )";
    }
    else
    {
        cout<<"Not Found "<<endl;
    }
    return 0;
}