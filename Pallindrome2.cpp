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
bool checkpallindrome(char arr[],int n){
    int i=0;
    int j=size(arr,n)-1;
    while (i<=j)
    {
        if(arr[i]==arr[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
    }
    return true;
}
int main()
{
    char ch[100];
    cin.getline(ch,30);
    bool ans=checkpallindrome(ch,30);
    if(ans)
    {
        cout<<"It is a pallindrome"<<endl;

    }
    else
    {
        cout<<"It is not a pallindrome "<<endl;
    }
}