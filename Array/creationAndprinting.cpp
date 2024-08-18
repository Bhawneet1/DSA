#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    cout<<"Enter values in array"<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    cout<<"Printing Array "<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    return 0;
}