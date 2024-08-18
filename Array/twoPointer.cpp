#include<iostream>
using namespace std;
void two(int arr[],int n)
{
    int i=0;
    int j=n-1;
    while(i<j)
    {
        cout<<arr[i++]<<"  ";
        cout<<arr[j--]<<"  ";
    }
}
int main()
{
    int arr[]={10,20,30,40,50,60,70,80,90,100};
    int n=10;
    two(arr,n);
    return 0;
}