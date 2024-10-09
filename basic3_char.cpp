#include<iostream>
using namespace std;
void lower_to_upper(char ch[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(ch[i]>='a'&&ch[i]<='z')
        {
            ch[i]=ch[i]+'A'-'a';
        }
        else if(ch[i]>='A' && ch[i]<='Z')
        {
            break;
        }
        count++;
    }
    for(int i=0;i<count;i++)
    {
        cout<<ch[i];
    }
}
int main()
{
    char ch[100];
    cin.getline(ch,80);
    lower_to_upper(ch,80);
    return 0;

}