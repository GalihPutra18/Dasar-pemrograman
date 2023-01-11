//judul
    //looping bersarang
//kamus
#include <iostream>
using namespace std;
int n,i,j;

//deskripsi
main()
{
    cin>>n;
    cout<<"pola 1\n";

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<"*\n";
        }
        cout<<endl;
    }

}
