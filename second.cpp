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

void replaced(char ch[],int n,int char_org,int char_new)
{
    int m=length(ch,n);
    for(int i=0;i<m;i++)
    {
        if(ch[i]==char_org)
        {
            ch[i]=char_new;
        }
    }
}

int main()
{
    char name[100];
    cout<<"Enter your first name and last name "<<endl;
    //char array donot take space therefore use getline
    cin.getline(name,20);
    cout<<"My name is "<<name<<endl;

    char sent[100];
    cout<<"Enter your sentence "<<endl;
    cin.getline(sent,30,'\t');//read until tab hit(arr,size,delimeter)
    cout<<sent;
    
    //length of char array
    int n=length(sent,100);
    //counts spaces also
    cout<<"Length of array is "<<n<<endl;



    char s[100];
    cout<<"Enter a sentence "<<endl;

    cin.getline(s,30,'\n');
    cout<<s<<endl;
    
    replaced(s,30,'@','-');
    cout<<s<<endl;
}