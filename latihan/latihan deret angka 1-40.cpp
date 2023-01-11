//judul
    //deret angka 1-40

//kamus
#include <iostream>
using namespace std;
int x,y,jumlah,jumlah2,jumlah3;

//deksripsi
main()
{
    cout<<endl;
    cout<<"bilangan dari 1-40: ";
    jumlah=0;
    y=1;
    while(y<=40)
    {
        cout<<y<<" ";
        y=y+1;
        jumlah=jumlah+y;
    }
    cout<<endl;
    cout<<"Total jumlah bilangan 1-40 adalah= "<<jumlah;
    cout<<endl;

    cout<<"angka yg habis diabgi 4 dari 1-40: ";
    x=1;
    do
    {
        if((x%4)==0)
        {
            cout<<x<<" ";
            jumlah2=jumlah2+1;
        }
        x=x+1;
    }
    while(x<=40);
    cout<<endl;
    cout<<"angka yg habis dibagi 4 dari 1-40 ada: "<<jumlah2;
    cout<<endl;
    cout<<"menampilkan angka yg habis dibagi 4 dari 1-40: ";
    x=1;
    while(x<=40)
    {
        if((x%4)==0)
        {
            cout<<x<<" ";
            jumlah3=jumlah3+1;

        }
        x=x+1;
    }
    cout<<endl;
    cout<<jumlah3;


}
