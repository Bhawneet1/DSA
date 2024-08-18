#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>>v(3,vector<int>(3,0));
    cout<<"Enter matrix "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>v[i][j];
        }
    }
    cout<<"Before Transpose "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<v[i][j]<<"  ";
        }
        cout<<endl;
    }
    
    for(int i=0;i<3;i++)
    {
        for(int j=i;j<3;j++)
        {
            swap(v[i][j],v[j][i]);
        }
    }
    cout<<"After Transpose "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<v[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}