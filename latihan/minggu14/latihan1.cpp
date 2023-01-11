//judul
    //latihan
    //12 desember 2022
    //Galih putra pratama
//kamus
#include <iostream>
#include <string.h>
using namespace std;

string kata;
int n,t;
bool palindrome= true;
//deskripsi
main()
{
    cout<<"program mengecek kata-kalimat palidnrome atau bukan\n";
    cout<<"input kata: ";
    getline(cin,kata);

    n=kata.length();

    t=0;
    while(t<n){
         if(kata[t]!=kata[n-t-1])
        {
            palindrome=false;
        }
        t++;
    }


    cout<<"result: \n";
    if(palindrome==true){
    cout<<"Palindrome";
    }
    else
    {
        cout<<"bukan palindrome";
    }
}
