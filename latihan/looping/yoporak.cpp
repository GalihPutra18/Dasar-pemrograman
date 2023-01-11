//judul
#include <iostream>
#include <stdio.h>
using namespace std;
//kamus
//deskripsi
int main()
{
    char ulangi='y';
    int counter=0;

    //perulangan while
    while(ulangi=='y')
    {
        printf("Apakah kamu mau mengulang?\n");
        printf("jawab (y/t): ");
        cin >> ulangi;

        //increment counter
        counter++;
    }

    printf("\n\n-------------");
    printf("perulangan selesai!\n");
    printf("Kamu mengulang sebanyak %i kali.\n",counter);

    return 0;
}

