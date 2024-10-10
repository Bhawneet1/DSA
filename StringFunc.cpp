#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[]="Bhawneet";
    strcat(s,"Singh");
    cout<<s<<endl;
    cout<<strlen(s)<<endl;
    char st[15];
    strcpy(st,s);
    cout<<st<<endl;
    cout<<strlen(st)<<endl;
    strncpy(st,st,5);
    cout<<st<<endl;
    cout<<strlen(st)<<endl;
    int a=strcmp(st,s);
    cout<<a<<endl;
    
    return 0;
}