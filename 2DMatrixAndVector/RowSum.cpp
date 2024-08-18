#include<bits/stdc++.h>
using namespace std;
void row_sum(vector<vector<int>>&v)
{
    int r=v.size();
    int c=v[0].size();
    
    for(int i=0;i<r;i++)
    {
        int ans=0;
        for(int j=0;j<c;j++)
        {
            ans+=v[i][j];
        }
        cout<<"sum for row "<<i<<" = "<<ans<<endl;
    }
}
int main()
{
    vector<vector<int>>arr(4,vector<int>(3,0));
    cout<<"Enter values in vector "<<endl;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    row_sum(arr);
    return 0;
}