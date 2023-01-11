//judul
        //latihan loop dalam loop (inner loop)
        //while deret angka seperti matrik
        //progammer galih putra pratama
#include <iostream>
using namespace std;
//kamus
int angkaloncat, loncatangka;
char matkul;

//deskripsi
int main()
{
    angkaloncat=1;
    while(angkaloncat <=10) //baris 1 sampai ke 10
    {
        //inner loop
        loncatangka=1;
        do
        {
            cout << loncatangka;
            loncatangka=loncatangka+1; //dari angka 1 sampai 9
        }
        while(loncatangka<10);
        angkaloncat=angkaloncat+4;
        cout << endl;
    }
    return 0;
}
