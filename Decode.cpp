#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string decode(string key,string message)
{
    //char mapping
    unordered_map<char,char> mapping;
    char space=' ';
    mapping[space]=space;
    char start='a';
    int index=0;
    while(start <='z' && index<key.length())
    {
        char keykacurrentchar=key[index];
        //start->abcd....
        //mapping->keykacurrentchar->alphabet
        if(mapping.find(keykacurrentchar) !=mapping.end())
        {
            //agar current key ki mapping pehle ho rakhi hai
            //no need to store mapping here
            //just move to next char
            index++;

        }
        else{
            //agar mapping nahi ho rakhi
            //mapping kardo
            mapping[keykacurrentchar]=start;
            index++;
            start++;
        }
    }
    //use mapping to decode
    string ans;
    for(int i=0;i<message.length();i++)
    {
        char messagechar=message[i];
        char mappedchar=mapping[messagechar];
        ans.push_back(mappedchar);
    }
    return ans;
}
int main()
{
    string key="the quick brown fox jumps over the lazy dog";
    string message="vkbs bs t suepuv";
    string ans=decode(key,message);
    cout<<ans<<endl;
}