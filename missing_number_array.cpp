#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int f=1;
    int arr[10];

    for(int i=0;i<10;i++)
    {
        cout<<"Enter the element "<<i<<" = ";
        cin>>arr[i];
    }

    sort(arr,arr+10);

    cout<<"Missing elements:";
    for(int i=0;i<10;i++)
    {
        if(f<arr[i])
        {
            cout<<f<<" ";
            f++;
        }
        f++;
    }

    cout<<endl;

    return 0;
}
