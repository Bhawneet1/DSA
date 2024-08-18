#include<bits/stdc++.h>
using namespace std;
void Col_sum(vector<vector<int>>&v)
{
    int r=v.size();
    int c=v[0].size();
    
    for(int j=0;j<c;j++)
    {
        int ans=0;
        for(int i=0;i<r;i++)
        {
            ans+=v[i][j];
        }
        cout<<"sum for col "<<j<<" = "<<ans<<endl;
    }
}
int main()
{
    vector<vector<int>>v(4,vector<int>(3,0));
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>v[i][j];
        }
    }
    Col_sum(v);
    return 0;
}