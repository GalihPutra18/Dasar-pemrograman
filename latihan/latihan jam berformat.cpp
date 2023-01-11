//judul
    //menghitung jam berformat
    //Porgrammer Galih Putra Pratama

//kamus
#include <iostream>
using namespace std;
int jawal,mawal,dawal;
int jakhir,makhir,dakhir;
int total1,total2,total_durasi;
int HH,MM,DD,sisa;
//deskripsi
main()
{
    cout<<"================================================\n";
    cout<<"     PROGRAM MENGHITUNG DURASI JAM\n";
    cout<<endl;
    cout<<endl;
    cout<<"Mulai pada jam: ";cin>>jawal;
    cout<<endl;
    cout<<"Mulai pada menit: ";cin>>mawal;
    cout<<endl;
    cout<<"mulai pada detik: ";cin>>dawal;
    cout<<endl;
    cout<<"berakhir pada jam: "; cin>>jakhir;
    cout<<endl;
    cout<<"berakhir pada menit: "; cin>>makhir;
    cout<<endl;
    cout<<"berakhir pada menit: "; cin>>dakhir;
    total1=(jawal*3600)+(mawal*60)+dawal;
    total2=(jakhir*3600)+(makhir*60)+dakhir;
    total_durasi=total2-total1;

    //konversikan kembali ke HH MM DD mod div
    HH=total_durasi/3600;
    sisa=total_durasi%3600;
    MM=sisa/60;
    DD=sisa%60;
    cout<<"jadi total durasinya adalah: "<<HH<<" jam,"<<MM<<" menit,"<<DD<<" detik\n";
}
