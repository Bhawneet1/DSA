#include<bits/stdc++.h>
using namespace std;
void diag_sum(vector<vector<int>>&v)
{
    int r=v.size();
    int c=v[0].size();
    int ans=0;
    for(int j=0;j<c;j++)
    {
        
        for(int i=0;i<r;i++)
        {
            if(i==j)
            ans+=v[i][j];
        }
        
    }
    cout<<"sum = "<<ans<<endl;
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
    diag_sum(v);
    return 0;
}