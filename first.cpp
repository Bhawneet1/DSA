#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //creation -size=10 bytes
    char arr[10];
    vector<char> v;
    // for(int i=0;i<10;i++)
    // {
    //     cin>>arr[i]; not needed in char array
    // }
    cout<<"Enter your name"<<endl;
    cin>>arr;
    // for(int i=0;i<10;i++)
    // {
    //     cout<<arr[i]<<"  ";
    // }
    cout<<"Your name is "<<endl;
    cout<<arr<<endl;

    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    cout<<arr[3]<<endl;
    cout<<arr[4]<<endl;
    
    cout<<"Ascii value of all and '\0' ki value 0"<<endl;
    cout<<int(arr[0])<<endl;
    cout<<int(arr[1])<<endl;
    cout<<int(arr[2])<<endl;
    cout<<int(arr[3])<<endl;
    cout<<int(arr[4])<<endl;

    //\0 displays termination of  char array

    cout<<endl;
}