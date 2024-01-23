#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {
    
    cout<<"enter to check = ";
    string n;
    cin>>n;
    string s = reverse(n.begin(),n.end());
    if(n==s)
    {
        cout<<"this is pallindrome";
    }
    else
    {
        cout<<"this is not";
    }

    return 0;
}
