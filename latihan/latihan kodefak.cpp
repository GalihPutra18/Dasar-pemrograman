//judul
    //
#include <iostream>
using namespace std;
//kamus
char kode;
int Bil,Bil2;

//dekripsi
main()
{
    cout << " masukkan Kode fakultas Udinus [A-B] " << endl;
    cin >> kode << endl;

    switch (kode)
    {
    case 'A' :
        {
            cout << "Fakultas Ilmu Komputer" << end;
            cout << "masukkan kode [1-6]" << endl
            cin >> Bil;

                switch (Bil)
                {
                case 1 :
                    {
                        cout << "TI";
                        break;
                    }
                case 2 :
                    {
                        cout << "SI";
                        break;
                    }
                case 3 :
                    {
                        cout << "DKV";
                    }
                case 4 :
                    {
                        cout << "ILKOM";
                        break;
                    }
                case 5 :
                    {
                        cout << "FTV";
                        break;
                    }
                case 6 :
                    {
                        cout << "ANIMASI";
                        break;
                    }
                default :
                    {
                        cout << "tidak ada";
                        break;
                    }
                }

    case 'B':
        {
            cout << "Fakultas Ekonomi";
                switch(Bil2)
                {
                case 1 :
                    {
                        cout << "MANAJEMEN";
                        break;
                    }
                case 2 :
                    {
                        cout << "AKUTANSI";
                        break;
                    }
                default :
                    {
                        cout << "tidak ada";
                        break;
                    }
                }
        }
        }
    }
}

