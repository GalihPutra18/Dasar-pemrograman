//judul
    //cetak nm

//kamus
#include<iostream>
using namespace std;
int h,m;
int v;

//deskripsi
int main()
{
    m=1;
    do
    {
        //---------iki sing diulang--------
        h=20 //awalan loop h
        while(h > 6){   //akhiran loop h
            cout << " " << h << endl;
            h=h-2;
        }
        cout << endl;
        m=m+1;
    }while(m<4); //target akhir loop
}
