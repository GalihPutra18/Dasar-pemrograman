//juduL
    //Program diagnosa penyakit
    //programmer galih putra pratama
#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;

//kamus
int Gejala1,Gejala2;
char Nama[30];

//deskripsi
main()
{
    cout << "\t\t\t\t\t|----> PROGRAM DIAGNOSA PENYAKIT <----|" << endl;
    cout << "Masukkan Nama Pasien :"; gets (Nama);
    cout << "MASUKKAN GEJALA ANDA"<<endl;
    cout << "############################################################################################################" << endl;
    cout << "|1.Pilek           | |2.Mual           | |3.Urine keruh        | |4.Pusing             | |5. Sesak nafas   |" << endl;
    cout << "|6.Bersin-bersin   | |7.Gatal berlebih | |8.Dada terasa sesak  | |9.Nyeri pada perut   |" << endl;
    cout << "############################################################################################################" << endl;
    cin >> Gejala1;
    cin >> Gejala2;

    if ((Gejala1=1)&(Gejala2=4))
    {
        cout << Nama <<", anda mengidap penyakit Demam" << endl;
    }
    else if (Gejala1==2&&Gejala2==9)
    {
        cout << Nama <<", anda mengidap penyakit Maag" << endl;
    }
    else if (Gejala1==1&Gejala2==6)
    {
        cout << Nama <<", anda mengidap penyakit Flu" << endl;
    }
    else if (Gejala1==5&&Gejala2==8)
    {
        cout << Nama <<", anda mengidap penyakit Asma" << endl;
    }
    else if (Gejala1==3&&Gejala2==7)
    {
        cout << Nama <<", anda mengidap penyakit Ginjal" << endl;
    }
    else if (Gejala1==2&&Gejala2==4)
    {
        cout << Nama <<", anda mengidap penyakit Migrain" << endl;
    }
    else
    {
        cout << "Penyakit tidak diketahui" << endl;
    }
}
