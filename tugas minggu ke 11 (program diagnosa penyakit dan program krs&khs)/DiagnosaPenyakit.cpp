//Judul
    //Diagnosa penyakit
    //galih putra pratama

//kamus
#include <iostream>
using namespace std;
string Gejala1,Gejala2,Gejala3;
char Nama[30];
int Pilihan;
//deksripsi
main()
{
    cout <<"PROGRAM DIAGNOSA PENYAKIT"<< endl;
    cout <<"Masukkan nama pasien: "; gets(Nama);

    cout <<"=========================================================================================="<< endl;
    cout <<"1.Pilek             2.Mual                  3.Bersin-bersin         4.Sesak nafas       5.Urine keruh" <<endl;
    cout <<"6.Gatal berlebih    7.Batuk                 8.Nyeri pada perut      9.menggigil         10.Pusing" << endl;
    cout <<"11.Perut kembung    12.Dada terasa sesak" << endl;
    cout <<"=========================================================================================="<< endl;
    Diagnosis:
    cout <<"Masukkan Gejala ke 1 [1-12]: "; cin>>Gejala1;
    cout <<"Masukkan Gejala ke 2 [1-12]: "; cin>>Gejala2;
    cout <<"Masukkan gejala ke 3 [1-12]: "; cin>>Gejala3;
    cout << endl;

    if((Gejala1,Gejala2,Gejala3=="1")&(Gejala2,Gejala1,Gejala3=="9")&(Gejala3,Gejala2,Gejala1=="10"))
    {
        cout << Nama <<", anda terkena penyakit Demam" << endl;
    }
    else if((Gejala1=="1")&(Gejala2=="3")&(Gejala3=="7"))
    {
        cout << Nama <<", anda terkena penyakit Flu" << endl;
    }
    else if((Gejala1=="2")&(Gejala2=="8")&(Gejala3=="11"))
    {
        cout << Nama <<", anda terkena penyakit Maag" << endl;
    }
    else if((Gejala1=="4")&(Gejala2=="7")&(Gejala3=="12"))
    {
        cout << Nama <<", anda terkena penyakit Asma" << endl;
    }
    else if((Gejala1=="2")&(Gejala2=="5")&(Gejala3=="6"))
    {
        cout << Nama <<", anda terkena penyakit Ginjal" << endl;
    }
    else
    {
        cout <<"penyakit tidak diketahui"<< endl;
    }
    cout<<"\n";
    cout<<"\n";
    cout<<"\n";
    Pilihan:
    cout<<"Masukkan angka[1-2]: 1.ingin mendiagnosis gejala penyakit lagi.\n";
    cout<<"                     2.Selesai.\n";
    cin>>Pilihan;
    if(Pilihan==1)
    {
        goto Diagnosis;
    }
    else if(Pilihan==2)
    {
        goto akhir;
    }
    else
    {
        cout<<"angka yang dimasukkan salah, silahkan ulangi lagi\n";
        goto Pilihan;
    }
    akhir:
        cout<<"PROGRAM SELESAI\n";
        return 0;
}
