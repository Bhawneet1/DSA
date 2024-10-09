#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char ch[100];
    int count=0;
    cin.getline(ch,20);
    for(int i=0;i<80;i++)
    {
        if(ch[i]=='\0')
        {
            break;
        }
        else
        {
            count++;
        }
    }
    cout<<count<<endl;
}