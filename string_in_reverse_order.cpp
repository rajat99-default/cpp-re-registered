#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    cout<<"Enter to reverse the string = ";
    string a ;
    cin>>a;
    
    reverse(a.begin(), a.end());
    cout<<"this is the reversed string = "<< a;
    cin.get();
    
}