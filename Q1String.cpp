#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    //Remove all adjacent duplicates in string
    string s="abbaca";
    string ans=" ";
    for(int i=0;i<s.length();i++)
    {
        char ch=s[i];
        if(ans.empty())
        {
            ans.push_back(ch);
        }
        if(ans.back()==ch)
        {
            ans.pop_back();
        }
        else
        {
            ans.push_back(ch);
        }
    }
    cout<<ans<<endl;
    return 0;
}