#include<iostream>
using namespace std;
void reverse_char(char ch[],int n)
{
    int i=0,count=0;
    while(ch[i] !='\0')
    {
        count++;
        i++;
    }
    int j=0;
    int k=count-1;
    while(j<k)
    {
        swap(ch[j++],ch[k--]);
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
    reverse_char(ch,80);

}