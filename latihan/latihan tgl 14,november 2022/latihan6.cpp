//judul
    //programmer gslih putrs
//kamus
#include <iostream>
using namespace std;
float A,Be,Ce,cari;
//deskripsi
main()
{
cout<<"input nilai a: ";cin>>A;
cout<<endl;
cout<<"input nilai Be: ";cin>>Be;
cout<<endl;
cout<<"input nilai Ce: ";cin>>Ce;
cout<<endl;
cout<<"nilai a adalah: "<<A;
cout<<endl;
cout<<"nilai Be adalah: "<<Be;
cout<<endl;
cout<<"nilai Ce adalah: "<<Ce;
cout<<endl;

cout<<"masukkan biangan yg anda cari: ";cin>>cari;
if(A==cari)
{
    cout<<A<<" merupakan bilangan A yg saya cari";
}
else if(Be==cari)
{
    cout<<Be<<", merupakan bilangan Be yg saya cari";
}
else if(Ce==cari)
{
    cout<<Ce<<", merupakan bilangan Ce yg saya cari";
}
else
{
    cout<<"yg saya cari tidak ada dalam variabel A,Be,maupun Ce";
}
}
