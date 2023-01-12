//judul
    //programmer gslih putrs
//kamus
#include <iostream>
using namespace std;
int N,x,y;

//deskripsi
main()
{
    cout<<"masukkan jumlah bilangan yang ingin kamu ulangi: ";
    cin>>N;
    x=5;
    y=0;
    do
    {
        cout<<x<<endl;
        y=y+1;
    }while(y<=N);
    return 0;

}

