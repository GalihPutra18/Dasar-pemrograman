//judul
    //programmer gslih putrs
//kamus
#include <iostream>
using namespace std;
int DATANE[6];
int x,cari;
//deskripsi
main()
{
    x=1;
    while(x<8)
    {
        cin>>DATANE[x];
        x=x+1;
    }
    cout<<endl;
    cout<<"masukkan bilangan yg anda cari: ";cin>>cari;
    cout<<endl;
    x=0;
    while(x<7)
    {
    if(DATANE[x]==cari)
    {
        cout<"bilangan ditemukan, "<<cari<<"dilokasi, "<<x;
    }
    x=x+1;
    }

}
