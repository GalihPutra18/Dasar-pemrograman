//judul
    //pengurutan 5 bilangan
    //galih putra pratama

//kamus
#include <iostream>
using namespace std;
int A,B,C,D,E;

//deskripsi
int main ()
{
    cout << "Pengurutan dari yang terbesar sampai ke yang terkecil\n";
    cout << "masukkan bilangan A: "; cin>>A;
    cout << "masukkan bilangan B: "; cin>>B;
    cout << "masukkan bilangan C: "; cin>>C;
    cout << "masukkan bilangan D: "; cin>>D;
    cout << "masukkan bilangan E: "; cin>>E;
    cout << "urutan bilangan A-E dari terbesar sampai terkecil adalah : ";
    if(A>B&&B>C&&C>D&&D>E)
    {
        cout<<"A,B,C,D,E";
        }
        else if(A>B&&B>D&&D>C&&C>E)
        {
        cout<<"A,B,D,C,E";
        }
        else if(A>B&&B>D&&D>E&&E>C)
        {
        cout<<"A,B,D,E,C";
        }
        else if(A>B&&B>C&&C>E&&E>D)
        {
        cout<<"A,B,C,E,D";
        }
        else if(A>B&&B>E&&E>D&&D>C)
        {
        cout<<"A,B,E,D,C";
        }
        else if(A>B&&B>E&&E>C&&C>D)
        {
        cout<<"A,B,E,C,D";
        }
        else if (A>C&&C>D&&D>E&&E>B)
        {
        cout<<"A,C,D,E,B";
        }
        else if (A>C&&C>D&&D>B&&B>E)
        {
        cout<<"A,C,D,B,E";
        }
        else if(A>C&&C>B&&B>D&&D>E)
        {
        cout<<"A,C,B,D,E";
        }
        else if(A>C&&C>B&&B>E&&E>D)
        {
        cout<<"A,C,B,E,D";
        }
        else if(A>C&&C>E&&E>B&&B>D)
        {
        cout<<"A,C,E,B,D";
        }
        //A,D...
        else if(A>D&&D>E&&E>B&&B>C)
        {
        cout<<"A,D,E,B,C";
        }
        else if(A>D&&D>E&&E>C&&C>B)
        {
        cout<<"A,D,E,C,B";
        }
        else if(A>D&&D>B&&B>C&&C>E)
        {
        cout<<"A,D,B,C,E";
        }
        else if(A>D&&D>B&&B>E&&E>C)
        {
        cout<<"A,D,B,E,C";
        }
        else if(A>D&&D>C&&C>E&&E>B)
        {
        cout<<"A,D,C,E,B";
        }
        else if(A>D&&D>C&&C>B&&B>E)
        {
        cout<<"A,D,C,B,E";
        }
        else if(A>E&&E>B&&B>C&&C>D)
        {
        cout<<"A,E,B,C,D";
        }
        else if(A>E&&E>D&&D>C&&C>B)
        {
        cout<<"A,E,D,C,B";
        }
        else if(A>E&&E>C&&C>D&&D>B)
        {
        cout<<"A,E,C,D,B";
        }
        else if(A>E&&E>C&&C>B&&B>D)
        {
        cout<<"A,E,C,B,D";
        }
        else if(A>E&&E>B&&B>C&&C>D)
        {
        cout<<"A,E,B,C,D";
        }
        else if(A>B&&B>E&&E>D&&D>C)
        {
        cout<<"A,B,E,D,C";
        }
        else if(A>B&&B>D&&D>E&&E>C)
        {
        cout<<"A,B,D,E,C";
        }
        else if(A>B&&B>E&&E>D&&D>C)
        {
        cout<<"A,B,E,D,C";
        }
        else if(A>B&&B>E&&E>C&&C>D)
        {
        cout<<"A,B,E,C,D";
        }
        else if (A>E&&E>D&&D>C&&C>B)
        {
        cout<<"A,E,D,C,B";
        }
        else if(A>C&&C>B&&B>D&&D>E)
        {
        cout<<"A,C,B,D,E";
        }
        else if(A>C&&C>D&&D>B&&B>E)
        {
        cout<<"A,C,D,B,E";
        }
        else if(A>C&&C>D&&D>E&&E>B)
        {
        cout<<"A,C,D,E,B";
        }
        else if(A>C&&C>B&&B>E&&E>D)
        {
        cout<<"A,C,B,E,D";
        }
        //B
        else if(B>A&&A>C&&C>D&&D>E)
        {
        cout<<"B,A,C,D,E";
        }
        else if(B>A&&A>C&&C>E&&E>D)
        {
        cout<<"B,A,C,E,D";
        }
        else if(B>A&&A>D&&D>E&&E>C)
        {
        cout<<"B,A,D,E,C";
        }
        else if(B>A&&A>D&&D>C&&C>E)
        {
        cout<<"B,A,D,C,E";
        }
        else if(B>A&&A>E&&E>C&&C>D)
        {
        cout<<"B,A,E,C,D";
        }
        else if(B>A&&A>E&&E>D&&D>C)
        {
        cout<<"B,A,E,D,C";
        }
        //C
        else if(C>A&&A>B&&B>D&&D>E)
        {
        cout<<"C,A,B,D,E";
        }
        else if(C>A&&A>B&&B>E&&E>D)
        {
        cout<<"C,A,B,E,D";
        }
        else if(C>A&&A>D&&D>E&&E>B)
        {
        cout<<"C,A,D,E,B";
        }
        else if(C>A&&A>D&&D>B&&B>E)
        {
        cout<<"C,A,D,E,B";
        }
        //D
        else if(D>A&&A>B&&B>C&&C>E)
        {
        cout<<"D,A,B,C,E";
        }
        else if(D>A&&A>B&&B>E&&E>C)
        {
        cout<<"D,A,B,E,C";
        }
        else if(D>A&&A>C&&C>E&&E>B)
        {
        cout<<"D,A,C,E,B";
        }
        else if(D>A&&A>C&&C>B&&B>E)
        {
        cout<<"D,A,C,B,E";
        }
        else if(D>A&&A>E&&E>C&&C>B)
        {
            cout<<"D,A,E,C,B";
        }
        else if(D>A&&A>E&&E>B&&B>C)
        {
            cout<<"D,A,E,C,B";
        }
        else if(D>B&&B>A&&A>C&&C>E)
        {
            cout<<"D,B,A,C,E";
        }
        else if(D>B&&B>A&&A>E&&E>C)
        {
            cout<<"D,B,A,E,C";
        }
        else if(D>B&&B>C&&C>A&&A>E)
        {
            cout<<"D,B,C,A,E";
        }
        else if(D>B&&B>C&&C>E&&E>A)
        {
            cout<<"D,B,C,E,A";
        }
        else if(D>B&&B>E&&E>A&&A>C)
        {
            cout<<"D,B,E,A,C";
        }
        else if(D>B&&B>E&&E>C&&C>A)
        {
            cout<<"D,B,E,C,A";
        }
        //E
        else if(E>A&&A>B&&B>C&&C>D)
        {
        cout<<"E,A,B,C,D";
        }
        else if(E>A&&A>B&&B>D&&D>C)
        {
        cout<<"E,A,B,D,C";
        }
        else if(E>A&&A>C&&C>D&&D>B)
        {
        cout<<"E,A,C,D,B";
        }
        else if(E>A&&A>C&&C>B&&B>D)
        {
        cout<<"E,A,C,B,D";
        }
        else if(E>A&&A>D&&D>B&&B>C)
        {
        cout<<"E,A,D,B,C";
        }
        else if(E>A&&A>D&&D>C&&C>B)
        {
        cout<<"E,A,D,C,B";
        }
        else if(E>B&&B>A&&A>C&&C>D)
        {
        cout<<"E,B,A,C,D";
        }
        else if(E>B&&B>A&&A>D&&D>C)
        {
        cout<<"E,B,A,D,C";
        }
        else if(E>B&&B>C&&C>A&&A>D)
        {
        cout<<"E,B,C,A,D";
        }
        else if(E>B&&B>C&&C>D&&D>A)
        {
        cout<<"E,B,C,D,A";
        }
        else if(E>B&&B>D&&D>A&&A>C)
        {
        cout<<"E,B,D,A,C";
        }
        else if(E>B&&B>D&&D>C&&C>A)
        {
        cout<<"E,B,D,C,A";
        }
        else if(E>D&&D>C&&C>B&&B>A)
        {
        cout<<"E,D,C,B,A";
        }
        else if(E>D&&D>C&&C>A&&A>B)
        {
            cout<<"E,D,C,A,B";
        }
        else if(E>D&&D>A&&A>B&&B>C)
        {
            cout<<"E,D,A,B,C";
        }
        else
        {
        cout<<"tidak diketahui"<<endl;
        }
}
