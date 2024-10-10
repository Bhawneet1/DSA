#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string name;
    name.push_back('B');
    name.push_back('H');
    name.push_back('A');
    cout<<name<<endl;
    name.pop_back();
    name.pop_back();
    name.pop_back();
    cout<<name<<endl;
    cin>>name;
    cout<<name<<endl;
    cout<<name[0]<<endl;

    
    return 0;
}