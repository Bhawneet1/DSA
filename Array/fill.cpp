#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    fill(arr,arr+10,7);//fills array with same value
    cout<<"Printing Array"<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<"  ";
    }
    return 0;
}