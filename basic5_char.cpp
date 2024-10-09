#include<iostream>
using namespace std;
bool check_pall(char ch[],int n)
{
    int l=0,count=0;
    while(ch[l]!='\0')
    {
        l++;
        count++;
    }
    int i=0;
    int j=count-1;
    while(i<j)
    {
        if(ch[i]==ch[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
    }
    return true;
}
int main()
{
    char ch[]="rcar";
    bool ans=check_pall(ch,80);
    if(ans==true)
    {
        cout<<"Pallindrome"<<endl;
    }
    else
    {
        cout<<"Not a pallindrome"<<endl;
    }
}