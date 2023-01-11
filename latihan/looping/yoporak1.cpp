//judul
    //latihan looping rada rumit
    //untuk urusan meneh po rak? dengan huruf y sebagai kuncinya
    //cermati kasus berikut tidak cuma type nya char
    //tapi char..[??] artinya bukan karakter tapi string
    //huruf y nya di apit dengan tanda petik dua ""
    //programmer : Galih putra pratama
#include <iostream>
#include <string.h>
using namespace std;
//kamus
char ulangi[2];
int counter;

//deskripsi
int main()
{
    strcpy(ulangi,"y"); //ini digunakan karna tidak bisa untuk ulangi="y"
    counter=-1;
    do
    {
        cout << "apakah kamu mau mengulang?\n" << endl;
        cout << "jawab (y/t):";
        cin >> ulangi;

        counter = counter+1;
    }
    while(strcmp(ulangi,"y")==0);
    //karena y nya adalah string yang ditandai dengan ""
    //maka tidak bisa while (ulang"y");
    //string harus menggunakan strcmo tentunya dengan menyertakan header string.h

    cout << "-------------" << endl;
    cout << "Perulangan berakhir..!\n" << endl;
    cout << "Kamu mengulang sebanyak " << counter << endl;
    return 0;
    }

