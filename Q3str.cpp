#include<iostream>
using namespace std;
int findpallindrome(string s,int i,int j)
{
    int count=0;
    while(i>=0 && j<s.length() && s[i]==s[j])
    {
        i--;
        j++;
        count++;
    }
    return count;
}
int main()
{
    string s="madam";
    int i,j,count=0;
    for(int center=0;center<s.length();center++)
    {
        //even
        i=center;
        j=center;
        int a=findpallindrome(s,i,j);
        //odd
        i=center;
        j=center+1;
        int b=findpallindrome(s,i,j);
        count+=a+b;
    }
    cout<<count<<endl;
    return 0;
}