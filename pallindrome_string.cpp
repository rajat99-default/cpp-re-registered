#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string name ;
    cout<<"Enter the string = ";
    cin>>name;
    string s = name;
    reverse(s.begin(),s.end());
    if(name==s)
    {
        cout<<"string is pallindrome";
    }
    else
    {
        cout<<"not pallindrome";
    }   
}