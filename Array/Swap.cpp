#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=10;
    int b=20;
    //Method-1(in-built function)
    cout<<"Before swap "<<endl;
    cout<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<"After Swap "<<endl;
    cout<<a<<" "<<b<<endl;

    //Method-2(temp)
    int c=30;
    int d=40;
    cout<<"Before swap "<<endl;
    cout<<c<<" "<<d<<endl;
    int temp=c;
    c=d;
    d=temp;
    cout<<"After Swap "<<endl;
    cout<<c<<" "<<d<<endl;

    //Method-3(sum method)
    int e=50;
    int f=60;
    cout<<"Before Swap "<<endl;
    cout<<e<<" "<<f<<endl;
    e=e+f;
    f=e-f;
    e=e-f;
    cout<<"After Swap "<<endl;
    cout<<e<<" "<<f<<endl;

    //Method-4(Xor method)
    int g=70;
    int h=80;
    cout<<"Before Swap "<<endl;
    cout<<g<<" "<<h<<endl;
    g=g^h;
    h=g^h;
    g=g^h;
    cout<<"After Swap "<<endl;
    cout<<g<<" "<<h<<endl;
}