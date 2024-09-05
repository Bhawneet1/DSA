#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[100];
    cout<<"Enter a sentence "<<endl;
    cin.getline(ch,30,'\n');
    int index=0;
    int count=0;
    while(ch[index]!='\0')
    {
        index++;
        count++;
    }
    //upper to lower
    for(int i=0;i<count;i++)
    {
        char c=ch[i];
        if(c>='A' && c<='Z')
        {
            c=c-'A'+'a';
        }
        ch[i]=c;
    }
    cout<<"After conversion "<<ch<<endl;


    //lower to upper
    for(int i=0;i<count;i++)
    {
        char c=ch[i];
        if(c>='a' && c<='z')
        {
            c=c-'a'+'A';
        }
        ch[i]=c;
    }
    cout<<"After conversion "<<ch<<endl;
}