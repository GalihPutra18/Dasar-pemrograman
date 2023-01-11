//judul
    //loop dalam loop
    //galih putra pratama
//kamus
#include <iostream>
using namespace std;
int y,x;
int jumlah;

//deskripsi
main()
{
    jumlah=0;
    y=1;
    x=jumlah;
    while(y<10)
    {
        if(y%2==0)
        {
            cout<<x<<"+\n";
            jumlah=jumlah+x;
        }
        else
        {
            cout<<x<<"-\n";
            jumlah=jumlah-x;
        }
    }


    return 0;

}
