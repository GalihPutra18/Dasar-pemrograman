//Judul
        //Membuat program aritmatika
        //Programmer Galih putra pratama

#include <iostream>
using namespace std;

//Kamus
int hasilA,hasilC,hasilD;
float Bil1,Bil2,hasilB;

//Deskripsi
main ()
{
    cout << "Masukkan bilangan ke 1 = "; cin >> Bil1;
    cout << "Masukkan bilangan ke 2 = "; cin >> Bil2;

        //operator perkalian
    hasilA=Bil1*Bil2;
    cout << "A. Hasil perkalian dari "<<Bil1<<" dan "<<Bil2<<" adalah = "<<hasilA<< endl;


        //operator pembagian
    hasilB=Bil1/Bil2;
    cout << "B. Hasil pembagian dari "<<Bil1<<" dan "<<Bil2<<" adalah = "<<hasilB<< endl;

        //operator pengurangan
    hasilC=Bil1-Bil2;
    cout << "C. Hasil pengurangan dari "<<Bil1<<" dan "<<Bil2<<" adalah = "<<hasilC<< endl;

        //operator penjumlahan
    hasilD=Bil1+Bil2;
    if(hasilD%2==0)
    {
        cout << "D. Hasil penjumlahan dari "<<Bil1<<" dan "<<Bil2<<" adalah "<<hasilD<<" (Genap) "<< endl;
    }
    else
    {
        cout << "D. hasil penjumlahan dari "<<Bil1<<" dan "<<Bil2<<" adalah "<<hasilD<<" (Ganjil) "<< endl;
    }
return 0;
}
