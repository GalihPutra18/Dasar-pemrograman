//judul
    //contoh mengulang seperti loop
    //tapi bukan loop
    //penerapan kasus bertanya y/t yoporak
    //programmer galih putra pratama
#include <iostream>
using namespace std;
//kamus
char yt;

//deskripsi
int main()
{
    awal:
    cout << "uji coba ulang ya atau tidak" << endl;
    cout << endl << endl;

    cout << "Data Lagi?ketik (y/t) ";
    cin >> yt;
    cout << endl;
    if(yt=='Y'|| yt=='y')
    {
        goto awal;
    }
    //-------------
    if(yt=='T'||yt=='t')
    {
        goto akhir;
    }
    akhir:
    return 0;
}
