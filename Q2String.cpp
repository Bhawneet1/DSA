#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    //remove all occurances of a substring
    string str="daabcbaabcbc";
    string sub="abc";
    while(str.length()!= 0 && str.find(sub) < str.length())
    {
        str.erase(str.find(sub),sub.length());
    } 
    cout<<str<<endl;
}