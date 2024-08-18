#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print_matrix_row(int arr[][3],int r,int c )//we add col=3 at end of input as c*i+j=a[i][j] therefore we need value of c
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
}
void print_matrix_col(int arr[][3],int r,int c)
{
    for(int j=0;j<c;j++)
    {
        for(int i=0;i<r;i++)
        {
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
}
void print_matrix_diag_1(int arr[][3],int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==j)
            {
                cout<<arr[i][j]<<"  ";
            }
            else
            {
                cout<<" - ";
            }

        }
        cout<<endl;
    }
}
void print_matrix_diag_2(int arr[][3],int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i+j==c-1)
            {
                cout<<arr[i][j]<<"  ";
            }
            else
            {
                cout<<" - ";
            }
        }
        cout<<endl;
    }
}
int main()
{
    //a[i][j]=c*i+j(c=no. of columns)
    int arr[4][3]={{10,20,30},{40,50,60},{70,80,90},{100,110,120}};
    cout<<"Row-wise print "<<endl;
    print_matrix_row(arr,4,3);
    cout<<"Column-wise print "<<endl;
    print_matrix_col(arr,4,3);
    cout<<"Diagonal-wise print "<<endl;
    print_matrix_diag_1(arr,4,3);
    cout<<"Secondary Diagonal print "<<endl;
    print_matrix_diag_2(arr,4,3);
    return 0;

}