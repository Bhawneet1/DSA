#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[4][3];
    fill(&arr[0][0],&arr[0][0]+4*3,10);
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
}