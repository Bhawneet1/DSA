#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int length(char arr[],int n)
{
    // int index=0;
    int count=0;
    // while(arr[index]!='\0')
    // {
    //     index++;
    //     count++;
    // }
    // return count;

    for(int i=0;i<n;i++)
    {
        if(arr[i]=='\0')
        {
            break;
        }
        else
        {
            count++;
        }

    }
    return count;
}
int main()
{
    char b[100];
    cout<<"Enter sentence "<<endl;
    cin.getline(b,30,'\n');
    // cout<<"Before reverse sentence :"<<endl;
    // cout<<b<<endl;
    int i=0;
    int j=length(b,30)-1;
    while(i<=j)
    {
        swap(b[i],b[j]);
        i++;
        j--;
    }
    cout<<"After reverse "<<endl;
    cout<<b<<endl;
}