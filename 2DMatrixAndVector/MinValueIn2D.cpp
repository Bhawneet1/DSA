#include<bits/stdc++.h>
using namespace std;
int find_min(int arr[][3],int r,int c)
{
    int mini=INT_MAX;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(arr[i][j]<mini)
            {
                mini=arr[i][j];
            }
        }
    }
    return mini;
}
int main()
{
    int arr[4][3]={{10,20,30},{40,50,60},{70,80,90},{45,46,47}};
    int r=4;
    int c=3;
    int mini=find_min(arr,r,c);
    cout<<"Minimum element is "<<mini<<endl;
}