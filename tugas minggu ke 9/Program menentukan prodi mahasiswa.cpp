//judul
    //program deteksi berdasarkan NIM
    //Galih putra pratama

//kamus
#include <iostream>
using namespace std;
char Fakultas;
int JenjangA,JenjangB,ProdiA1,ProdiA2,ProdiB1,ProdiB2;

//deskripsi
main()
{
    cout <<"=========Program Menentukan Prodi Mahasiswa=========\n";
    cout<<"Masukkan NIM digit ke 1[A-B]: ";
    cin>>Fakultas;
    switch(Fakultas){
    case 'A':
        cout <<"FIK"<< endl;
        cout<<"Masukkan NIM digit ke 2[1-2]: ";
        cin>>JenjangA;
        switch(JenjangA){
        case 1:
            cout <<"FIK S1"<<endl;
            cout<<"Masukkan NIM digit ke 3[1-2]: ";
            cin>>ProdiA1;
            switch(ProdiA1){
            case 1:
                cout <<"FIK S1 Teknik Informatika"<<endl;
                break;
            case 2:
                cout <<"FIK S1 Sistem Informasi"<<endl;
                break;
            default:
                cout<<"Tidak diketahui"<<endl;
            }
            break;
        case 2:
            cout <<"D3"<<endl;
            cout<<"Masukkan NIM digit ke 3[1-2]: ";
            cin>>ProdiA2;
            switch(ProdiA2){
            case 1:
                cout <<"FIK D3 Manajemen Informatika"<<endl;
                break;
            case 2:
                cout <<"FIK D3 Teknik Informatika"<<endl;
                break;
            default:
                cout<<"Tidak diketahui"<<endl;
            }break;
        default:
            cout<<"Tidak diketahui"<<endl;
            break;
        }
        break;

    case 'B':
        cout <<"FEB"<<endl;
        cout<<"Masukkan NIM digit ke 2[1-2]: ";
        cin>>JenjangB;
        switch(JenjangB){
        case 1:
            cout <<"FEB S1"<<endl;
            cout<<"Masukkan NIM digit ke 3[1-2]: ";
            cin>>ProdiB1;
            switch(ProdiB1){
            case 1:
                cout <<"FEB S1 Manajemen"<<endl;
                break;
            case 2:
                cout <<"FEB S1 Akutansi"<<endl;
                break;
            default:
                cout<<"Tidak diketahui"<<endl;

            }break;


        case 2:
            cout <<"FEB D3"<<endl;
             cout<<"Masukkan NIM digit ke 3[1-2]: ";
            cin>>ProdiB2;
            switch(ProdiB2){
            case 1:
                cout <<"FEB D3 Akutansi"<<endl;
                break;
            case 2:
                cout <<"FEB D3 Manajemen (contoh)"<<endl;
                break;
            default:
                cout<<"Tidak diketahui"<<endl;

            }break;
        default:
            cout<<"Tidak diketahui"<<endl;

        }break;
    default:
        cout<<"Tidak diketahui"<<endl;
        break;
    }
}
