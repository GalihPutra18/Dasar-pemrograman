//judul
    //latihan lurik
    //author galih putra pratama
    //A11.2022.14359
//kamus
#include <iostream>
using namespace std;
int bil1,bil2,bil3,bil4,bil5;
int data[5];
int x,y;
int cari,hasil1,golek;

//deskripsi
main()
{
cout<<"input ke variabel bebas"<<endl;
cout<<"input bilangan ke-1: ";cin>>bil1;
cout<<"input bilangan ke-2: ";cin>>bil2;
cout<<"input bilangan ke-3: ";cin>>bil3;
cout<<"input bilangan ke-4: ";cin>>bil4;
cout<<"input bilangan ke-5: ";cin>>bil5;
cout<<endl;
cout<<"input ke variabel array"<<endl;
cout<<"input bilangan ke data index ke o: ";cin>>data[0];
cout<<"input bilangan ke data index ke 1: ";cin>>data[1];
cout<<"input bilangan ke data index ke 2: ";cin>>data[2];
cout<<"input bilangan ke data index ke 3: ";cin>>data[3];
cout<<"input bilangan ke data index ke 4: ";cin>>data[4];
//inputlah array data[] diaas boleh/dipersilahkan
//kalau akan dibuat loop
cout<<"Masukkan angka yg kita cari: "; cin>>cari;
if(cari==bil1)
{
cout<<"ketemu ndess, angka "<<cari<<endl;
}
else if(cari==bil2)
{
cout<<"ketemu ndess, angka "<<cari<<endl;
}
else if(cari==bil3)
{
cout<<"ketemu ndess, angka "<<cari<<endl;
}
else if(cari==bil4)
{
cout<<"ketemu ndess, angka "<<cari<<endl;
}
else if(cari==bil5)
{
cout<<"ketemu ndess, angka "<<cari<<endl;
}
else
{
cout<<"tidak ditemukan"<<endl;
}
//input cari data
cout<<"masukkan data yang mau dicari"<<endl;
cin>>golek;
y=0;
while(y<5)
{
    if(golek==data[y])
    {
        cout<<"ditemukan index ke"<<y<<endl;
    }
    else
    {
        cout<<"tidak ketemu"<<endl;
    }
    y=y+1;
}

cout<<"menampilkan isi dari variabel bebas"<<endl;
cout<<"isi dari bilangan ke-5= "<<bil5<<endl;
cout<<"isi dari bilangan ke-4= "<<bil4<<endl;
cout<<"isi dari bilangan ke-3= "<<bil3<<endl;
cout<<"isi dari bilangan ke-2= "<<bil2<<endl;
cout<<"isi dari bilangan ke-1= "<<bil1<<endl;
hasil1=bil1+bil2+bil3+bil4+bil5;
cout<<"total isi dari variabel bebas= ";

cout<<"menampilkan isi dari variabel array tanpa menggunakan loop"<<endl;
cout<<"isi dari data index ke 2= "<<data[2]<<endl;
cout<<"isi dari data index ke 4= "<<data[4]<<endl;
cout<<"isi dari data index ke 1= "<<data[1]<<endl;
cout<<"isi dari data index ke 3= "<<data[3]<<endl;
cout<<"isi dari data index ke o= "<<data[0]<<endl;
cout<<endl;
cout<<"menampilkan isi dari variabel array menggunakan loop"<<endl;
x=0;
do
{
    cout<<data[x];
    x=x+1;
    }
    while(x<5);
}

