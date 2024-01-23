#include<iostream>
using namespace std;
template <class t , class b>
   t get(t x , b  y)
{
    cout<<x<<endl<<y;
}
int main()
{
    get(7,9.2);
}