#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int size(char arr[],int n)
{
    int index=0;
    int count=0;
    while(arr[index]!='\0')
    {
        count++;
        index++;
    }
    return count;
}
void reverse(char arr[],int n)
{
    int i=0;
    int j=size(arr,n)-1;
    while(i<=j)
    {
        swap(arr[i++],arr[j--]);
    }
}
int main()
{
    char ch[100];
    cout<<"Enter sentence"<<endl;
    cin.getline(ch,30);
    char mh[100];
    int count=0;
    for(int i=0;i<size(ch,100);i++)
    {
        mh[i]=ch[i];
    }
    reverse(ch,100);
    for(int i=0;i<size(ch,100);i++)
    {
        if(mh[i]==ch[i])
        {
            count++;
        }
        else
        {
            break;
        }
        
    }
    if(count==size(ch,100))
    {
        cout<<"It is a pallindrome"<<endl;
    }
    else
    {
        cout<<"Not a pallindrome"<<endl;
    }
}