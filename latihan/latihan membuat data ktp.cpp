//Judul
    //latihan Membuat data ktp
    //Programmer Galih putra pratama
#include <iostream>
using namespace std;
//Kamus
string KeteranganProvinsiPembuatan;
string KeteranganKabupatenPembuatan;
string NIK;
string Nama;
string TTL;
string JK;
string Alamat;
string RTRW;
string Kel;
string Kec;
string Agama;
string SP;
string Pekerjaan;
string Kewarganegaraan;
string BerlakuHingga;



//Deskripsi
main()
{
    cout << "===============================================================" <<endl;
    cout << "\t\tPROVINSI "; getline(cin, KeteranganProvinsiPembuatan);
    cout <<endl;
    cout << "\t\tKABUPATEN "; getline(cin, KeteranganKabupatenPembuatan);
    cout <<endl;
    cout << "\nNIK\t\t\t : "; getline(cin, NIK);
    cout << "\nNama\t\t\t : "; getline(cin, Nama);
    cout << "Tempat,Tanggal Lahir\t : "; getline(cin,TTL);
    cout << "Jenis Kelamin\t\t : "; getline(cin,JK);
    cout << "Alamat\t\t\t : "; getline(cin,Alamat);
    cout << "RT/RW\t\t\t : "; getline(cin,RTRW);
    cout << "Kelurahan/Desa\t\t : "; getline(cin,Kel);
    cout << "Kecamatan\t\t : "; getline(cin,Kec);
    cout << "Agama\t\t\t : "; getline(cin,Agama);
    cout << "Status Perkawinan\t : "; getline(cin,SP);
    cout << "Pekerjaan\t\t : "; getline(cin,Pekerjaan);
    cout << "Kewarganegaraan\t\t : "; getline(cin,Kewarganegaraan);
    cout << "Berlaku Hingga\t\t : "; getline(cin,BerlakuHingga);
    cout <<endl;
    cout << "===============================================================" <<endl;
}
