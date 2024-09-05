#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // string s;
    // cout<<"Enter string "<<endl;
    // cin>>s;
    // cout<<"The string you entered is "<<endl;
    // cout<<s<<endl;


    string n;
    n.push_back('a');
    n.push_back('b');
    n.push_back('c');
    n.push_back('d');
    n.pop_back();
    cout<<n<<endl;


    // string sentence;    
    // getline(cin,sentence,'\n');//for string we use getline as this
    // cout<<sentence<<endl;



   string name="Bhawneet Singh";
   cout<<name[0]<<endl;
   cout<<name.at(0)<<endl;


   cout<<name.front()<<endl;
   cout<<name.back()<<endl;

   cout<<name.length()<<endl;


   //iterator
   auto it=name.begin();
   while(it!=name.end())
   {
    cout<<*it<<endl;
    it++;
   }
   

   //clear 
   name.clear();
   //empty
   if(name.empty())
   {
    cout<<"Empty "<<endl;
   }
   else
   {
    cout<<"Not empty "<<endl;
   }

   //concat
     string fname="Bhawneet";
     string lname="Singh";
     cout<<fname+lname<<endl;

    string d="Hello jee kaise ho saare ";
    cout<<d.substr(5,5)<<endl;

    cout<<d.substr(0)<<endl;
    cout<<d.substr(5)<<endl;


    //find
    string m="Hello g";
    string mn="Hello";
    cout<<m.find(mn)<<endl;//match then return the integer value of first index where the word matches if not found then -1
    if(m.find(mn)!=string::npos)
    {
        cout<<"Found "<<endl;
    }
    else
    {
        cout<<"Not found "<<endl;
    }


    //compare
    string s1="love";
    string s2="love";
    cout<<s1.compare(s2)<<endl;//0 means same,+ve means first greater else second greater
    
}