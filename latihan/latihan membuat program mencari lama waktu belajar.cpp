//judul
    //membuat program berapa lama waktu belajar
    //programmer Galih Putra Pratama
#include <iostream>
using namespace std;
//kamus
int JamAwal,MenitAwal,DetikAwal;
int JamAkhir,MenitAkhir,DetikAkhir;
int TotalDetikAwal,TotalDetikAkhir;
int Durasi, HH,MM,DD;

//deskripsi
main()
{
    cout << "Menghitung lama waktu yang dihabiskan\n\n" << endl;
    cout <<"Mulai pada jam = "; cin>>JamAwal;
    cout <<"Mulai pada menit = "; cin>>MenitAwal;
    cout <<"Mulai pada detik = "; cin>>DetikAwal;
    cout << endl;
    cout <<"Berakhir pada jam = "; cin>>JamAkhir;
    cout <<"Berakhir pada menit = "; cin>>MenitAkhir;
    cout <<"Berakhir pada detik = "; cin>>DetikAkhir;
    cout << endl;
    TotalDetikAwal = (JamAwal*3600)+(MenitAwal*60)+DetikAwal;
    TotalDetikAkhir = (JamAkhir*3600)+(MenitAkhir*60)+DetikAkhir;

    Durasi = TotalDetikAkhir-TotalDetikAwal;

    HH = Durasi/3600;
    MM = (Durasi%3600)/60;
    DD = (Durasi%3600)%60;

    cout << "Durasi waktu belajar yang dihabiskan adalah : "<<HH<<" Jam, "<<MM<<" Menit, "<<DD<<" Detik.";


}
