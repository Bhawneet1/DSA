#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string name;
    cin>>name;
    cout<<name[0]<<endl;
    cout<<name.front()<<endl;
    cout<<name.back()<<endl;
    cout<<name.length()<<endl;


    auto it=name.begin();
    while(it !=name.end() )
    {
        cout<<*it<<endl;
        it++;
    }cout<<endl;

    if(name.empty())
    {
        cout<<"Empty String"<<endl;
    }
    else
    {
        cout<<"Non Empty String "<<endl;
    }

    string fname="Bhawneet";
    string lname="Singh";
    string ans=fname+" "+lname;
    cout<<ans<<endl;

    string sent="Hello g how are you";
    cout<<sent.substr(5,5)<<endl;//(index,to)
    cout<<sent.substr(0)<<endl;//0 to end means all
    cout<<sent.substr(5)<<endl;//5 to end


    int ans1=sent.find(name);
    cout<<ans1<<endl;

    if(sent.find(name) != string::npos)
    {
        cout<<"found"<<endl;
    }
    else
    {
        cout<<"Not found "<<endl;
    }
    return 0;
}