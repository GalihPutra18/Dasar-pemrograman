//judul
    //program kelipatan 6
    //galih putra pratama

//kamus
#include <iostream>
using namespace std;
int AngLoncat;

//deksripsi
main()
{
    cout <<"============ PROGRAM KELIPATAN ANGKA 6 ============\n\n";
    AngLoncat=0;    //dimulai dari angka 0
    while(AngLoncat<=100)   //kondisi berhenti dititik ini yaitu angka 100
    {
        cout <<AngLoncat<<endl;
        AngLoncat=AngLoncat+6;  //Kelipatan 6
    }
    return 0;
}
