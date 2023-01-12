 //judul
 //Membuat program sederhana yang memuat nama, dan jenis kelamin
 //Programmer Galih Putra Pratama
#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
//kamus
char Nama[30];
string JenisKelamin;
//Deskripsi
main()
{ cout << "Masukkan nama anda : ";
 gets(Nama);
 cout << "jenis kelamin anda (L/P) : ";cin >> JenisKelamin;
 if(JenisKelamin=="L")
 {
 cout << "Halo " << Nama << ", Anda adalah seorang Pria";
 }
 else if(JenisKelamin=="P")
 {
 cout << "Halo " << Nama << ", Anda adalah seorang Wanita";
 }
 else
 {
 cout << "Anda adalah seorang banci" << endl;
 }
 getch();
 return 0;
}
