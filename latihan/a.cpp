#include <iostream>
using namespace std;

int x,y;

main()
{
    while(y<=5)
    {
        x=1;
        while(x<=y)
        {
            cout<<"";
            cout<<x;
            x++;
        }
        cout<<endl;
        y++;

    }
    //beda lagi
    while(y<=5)
    {
        x=5;
        while(x>=y)
        {
            cout<<"";
            cout<<x;
            x--;
        }
        cout<<endl;
        y++;
    }
    return 0;
}
