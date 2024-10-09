#include<iostream>
using namespace std;
void replace_el(char ch[],char from,char to,int n)
{
    for(int i=0;i<n;i++)
    {
        if(ch[i]==from)
        {
            ch[i]=to;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<ch[i];
    }
}
int main()
{
    char ch[100];
    cin.getline(ch,80);
    char from='@';
    char to='_';
    replace_el(ch,from,to,80);
    return 0;
}