#include<iostream>
using namespace std;
class rajat
{
    int a,b;
  public :  int give(int x,int y)
    {
        a=x;
        b=y;
        return 0;
    }
    int update()
    {
        a++;
        b++;
        return 0;
    }
    int show()
    {
        cout<<a<<b;
        return 0;
    }
};
    int main()
    {
        rajat obj;
        obj.give(1,2);
        obj.show();
        return 0;
    }
