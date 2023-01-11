//judul
    //Program krs & khs
    //Galih Putra pratama

//kamus
#include <iostream>
using namespace std;
string Pw;
string NIM;
string MK1;
string MK2;
string MK3;
string MK4;
string MK5;
string MK6;
string MK7;
int Pilihan1,Pilihan2,Pilihan3;
int SKS1,SKS2,SKS3,SKS4,SKS5,SKS6,SKS7;
float TotalSKS,TotalNilai,RataRata,NT1,NT2,NT3,NT4,NT5,NT6,NT7;


//deskripsi
main()
{
    cout <<"======================PROGRAM APLIKASI KRS & KHS======================\n"<<endl;
    cout <<"Masukkan NIM, contoh[A11.2021.12345] : "; getline(cin, NIM);
    cout<<"Masukkan password: ";getline(cin, Pw);
    if(NIM=="A11.2022.14359"&&Pw=="galih12345")     //hanya bisa diakses jika NIM dan pw nya tersebut
    {
        cout<<"Akses diterima\n";
        cout<<"Nama : Galih Putra Pratama\n";
        cout<<"NIM  : A11.2022.14359\n";
        cout<<"Podi : Teknik Informatika\n";
        awal:
        cout<<"Silahkan pilih[1/2]:     1.KRS\n";
        cout<<"                         2.KHS\n";
        cin>>Pilihan1;
        cout<<"========================================================================================================================================================================\n";
        if(Pilihan1==1)
        {
            cout<<"                                                         KARTU RENCANA STUDI MAHASISWA\n";
            cout<<"\n";
            cout<<"\n";
            cout<<"                     NIM              : A11.2022.14359                        Semester        : Ganjil\n";
            cout<<"                     Nama             : GALIH PUTRA PRATAMA                   Tahun Ajaran    : 2022/2023\n";
            cout<<"                     Program Studi    : Teknik informatika-S1                 Dosen Wali      : DAURAT SINAGA, M.Kom\n";
            cout<<"                     Fakultas         : Fakultas Ilmu Komputer                Email Dosen     : daurat.sinaga@dsn.dinus.ac.id\n";
            cout<<"\n";
            cout<<"No   Kode MK         Nama Mata Kuliah                    SKS T/P STS Mdl.    Kelp.            Jadwal 1                     Jadwal 2                  Jadwal 3\n";
            cout<<"                                                                                         Hari, Jam      Ruang        Hari,Jam        Ruang        Hari, Jam        Ruang\n";
            cout<<"1    A11.54101       KALKULUS 1 1                         4   T   B   -    A11.4109  SENIN, 08.40-10.20 H.4.7    RABU,08.40-10.20    Kulino             -            -\n";
            cout<<"2    A11.54105       DASAR PEMROGAMAN                     4   TP  B   -    A11.4109  KAMIS, 10.20-12.00 H.4.8    SENIN.07.00-08.40   D.2.H              -            -\n";
            cout<<"3    A11.54302       MATEMATIKA DISKRIT                   3   T   B   -    A11.4109  JUMAT, 09.30-12.00 H.4.2            -             -                -            -\n";
            cout<<"4    A11.54314       PEMROGAMAN BERBASIS WEB              2   T   B   -    A11.4109  SELASA,12.30-14.10 D.3.M            -             -                -            -\n";
            cout<<"5    A11.54403       ORGANISASI DAN ARSITEKTUR KOMPUTER   3   T   B   -    A11.4109  JUMAT, 12.30-15.00 H.4.3            -             -                -            -\n";
            cout<<"6    AF201704        DASAR DASAR KOMPUTASI                2   P   B   -    A11.4109  KAMIS, 07.00-08.40 D.2.G            -             -                -            -\n";
            cout<<"7    U201704         PENGANTAR TEKNOLOGI INFORMASI        2   T   B   -    A11.4109          -             -             -             -                -            -\n";
            cout<<"                                             Jumlah SKS   20\n";
            cout<<"\n";
            cout<<"========================================================================================================================================================================\n";
            cout<<"\n";
            balik:
            cout<<"Silahkan pilih:  1.lanjut KHS.\n";
            cout<<"                 2.Kembali ke awal.\n";
            cout<<"                 3.Selesai.\n";
            cin>>Pilihan2;
            if(Pilihan2==1)
            {
                goto KHS;
            }
            else if(Pilihan2==2)
            {
                goto awal;
            }
            else if(Pilihan2==3)
            {
                goto akhir;
            }
            else
            {
                cout<<"input salah, coba ulangi lagi\n";
                goto balik;
            }
        }

        else if(Pilihan1==2)
            KHS:
        {
            cout<<"                                                     KARTU HASIL STUDI MAHASISWA\n";
            cout<<"\n";
            cout<<"\n";
            cout<<"Mata Kuliah KALKULUS 1\n";
            cout<<"Masukkan jumlah SKS: ";cin>>SKS1;
            cout<<endl;
            cout<<"Masukkan nilai Tugas: ";cin>>NT1;
            cout<<endl;
            cout<<"\n";
            cout<<"Mata DASAR PEMROGAMAN\n";
            cout<<"Masukkan jumlah SKS: ";cin>>SKS2;
            cout<<endl;
            cout<<"Masukkan nilai Tugas: ";cin>>NT2;
            cout<<"\n";
            cout<<"Mata MATEMATIKA DISKRIT\n";
            cout<<"Masukkan jumlah SKS: ";cin>>SKS3;
            cout<<endl;
            cout<<"Masukkan nilai Tugas: ";cin>>NT3;
            cout<<"\n";
            cout<<"Mata PEMROGAMAN BERBASIS WEB\n";
            cout<<"Masukkan jumlah SKS: ";cin>>SKS4;
            cout<<endl;
            cout<<"Masukkan nilai Tugas: ";cin>>NT4;
            cout<<"\n";
            cout<<"Mata ORGANISASI DAN ARSITEKTUR KOMPUTER\n";
            cout<<"Masukkan jumlah SKS: ";cin>>SKS5;
            cout<<endl;
            cout<<"Masukkan nilai Tugas: ";cin>>NT5;
            cout<<"\n";
            cout<<"DASAR DASAR KOMPUTASI\n";
            cout<<"Masukkan jumlah SKS: ";cin>>SKS6;
            cout<<endl;
            cout<<"Masukkan nilai Tugas: ";cin>>NT6;
            cout<<"\n";
            cout<<"PENGANTAR TEKNOLOGI INFORMASI\n";
            cout<<"Masukkan jumlah SKS: ";cin>>SKS7;
            cout<<endl;
            cout<<"Masukkan nilai Tugas: ";cin>>NT7;
            cout<<"\n";
            cout<<"\n";
            TotalSKS=((SKS1)+(SKS2)+(SKS3)+(SKS4)+(SKS5)+(SKS6)+(SKS7));
            TotalNilai=((NT1)+(NT2)+(NT3)+(NT4)+(NT5)+(NT6)+(NT7));
            RataRata=TotalNilai/TotalSKS;
            cout<<"                                                     KARTU HASIL STUDI MAHASISWA\n";
            cout<<"\n";
            cout<<"\n";
            cout<<"                     NIM              : A11.2022.14359                        Semester        : Ganjil\n";
            cout<<"                     Nama             : GALIH PUTRA PRATAMA                   Tahun Ajaran    : 2022/2023\n";
            cout<<"                     Program Studi    : Teknik informatika-S1                 Dosen Wali      : DAURAT SINAGA, M.Kom\n";
            cout<<"                     Fakultas         : Fakultas Ilmu Komputer                Email Dosen     : daurat.sinaga@dsn.dinus.ac.id\n";
            cout<<"\n";
            cout<<"\n";
            cout<<"TOTAL SKS: "<<TotalSKS<<endl;
            cout<<"TOTAL NILAI: "<<TotalNilai<<endl;
            cout<<"RATA-RATA: "<<RataRata<<endl;
            cout<<"\n";
            cout<<"\n";
            cout<<"Silahkan pilih angka[1-3]:   1.Kembali ke awal\n";
            cout<<"                             2.Selesai\n";
            cin>>Pilihan3;
            if(Pilihan3==1)
            {
                goto awal;
            }
            else if(Pilihan3==2)
            {
                goto akhir;
            }
            else
            {
                cout<<"input salah, coba ulangi lagi\n";
                goto balik;
            }

        }
    }
    else
    {
            cout<<"Akses ditolak, silahkan coba lagi\n";
            goto awal;
    }
    akhir:
        cout<<"PROGRAM APLIKASI KRS & KHS SELESAI\n";
    return 0;

}
