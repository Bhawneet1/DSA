#include<bits/stdc++.h>
using namespace std;
void print_vector_1(vector<int>&v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<"  ";
    }
    cout<<endl;
}
void print_vector_2(vector <int>&v)
{
    vector<int>::iterator it;
    for(auto it:v)
    {
        cout<<it<<"  ";
    }
    cout<<endl;
}
void print_vector_3(vector<int> &v)
{
   for(int i=0;i<v.size();i++)
   {
        cout<<v.at(i)<<"  ";
   }
   cout<<endl;
}
int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    cout<<"Size before pop "<<v.size()<<endl;
    cout<<"Capacity before pop "<<v.capacity()<<endl;
    print_vector_1(v);
    v.pop_back();
    cout<<"Size after pop "<<v.size()<<endl;
    cout<<"Capacity after pop "<<v.capacity()<<endl;
    print_vector_2(v);
    print_vector_3(v);
    v.clear();
    cout<<"vector size after clear "<<v.size()<<endl;
    return 0;
}