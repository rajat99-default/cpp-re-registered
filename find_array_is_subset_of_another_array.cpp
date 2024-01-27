#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"enter the total elements = ";
    cin>>size;
    int* arr = new int[size];

    for(int i=0;i<=size;i++)
    {
        cout<<"enter the element number "<<i<<" = ";
        cin>>arr[i];
    }

    int size2;
    cout<<"enter the total elements = ";
    cin>>size2;
    int* arr2 = new int[size2];

    for(int i=0;i<=size;i++)
    {
        cout<<"enter the subset "<<i<<" = ";
        cin>>arr2[i];
    }
}