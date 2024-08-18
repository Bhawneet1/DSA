#include<iostream>
using namespace std;

void print_array(int arr[],int n)//pass array with sq. brackets and its size
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}
int main()
{
    int arr[]={10,20,30,40,50};
    int n=5;
    print_array(arr,n);//array without sq. brackets and size
    //array always passes by reference(*(arr+i))
}