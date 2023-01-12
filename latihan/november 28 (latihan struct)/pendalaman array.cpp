//judul
    //pendalaman array
    //28 november
//kamus
#include <iostream>
using namespace std;
int x,y,z,k,l;
//int DataNilai[4];
//int TabA[2],TabB[2],TabHasil[2];
int MatA[1][1],MatB[1][1],TabHasil[1][1];
int kolom,baris;
//deskripsi
main()
{
   //cout<<"nilai x: ";cin>>x;
   //cout<<"nilai y: "; cin>>y;
   //cout<<"nilai z: "; cin>>z;
   //cout<<"nilai k: ";cin>>k;
   //cout<<"nilai l: "; cin>>l;

   //cout<<x;
   //cout<<y;
   //cout<<z;
   //cout<<k;
   //cout<<l;
   //cout<<endl;
//============== index array================
   //cin>> DataNilai[4];
   //cin>> DataNilai[2];
   //cin>> DataNilai[0];
   //cin>> DataNilai[1];
   //cout<<endl;
   //cout<<DataNilai[4];
   //cout<<DataNilai[1];
   //cout<<DataNilai[2];
   //cout<<DataNilai[3];
   //cout<<endl;

//==========Penjumlahan matrik========
    //statik
    //TabA[1]=3;
    //TabA[2]=1;
    //TabA[0]=4;

    //dinamik
    //cout<<"input nilai TabB: ";cin>>TabA[0];
    //cout<<"input nilai TabB: ";cin>>TabA[1];
    //cout<<"input nilai TabB: ";cin>>TabA[2];

    //TabHasil[0]=TabA[0]+TabB[0];
    //TabHasil[1]=TabA[1]+TabB[1];
    //TabHasil[2]=TabA[2]+TabB[2];

    //cout<<"Hasil dari penjumlahan matrik A dan B: "<<endl;
    //cout<<TabHasil[0]<<", "<< TabHasil[1]<<", "<< TabHasil[2];
    //cout<endl;


    cout<<"Isian matrk 2 dimensi"<<endl;
    //TabA
    cout<<"Matrik A"<<endl;
    baris=0;
    do{

        kolom=0;
        while(kolom<3)
        {
            cin>>MatA[kolom][baris];
            kolom=kolom+1;
        }
        baris=baris+1;
    }while(baris<3);

    //TabB
    baris=0;
    do{

        kolom=0;
        while(kolom<3)
        {
            cin>>MatB[kolom][baris];
            kolom=kolom+1;
        }

        baris=baris+1;
    }while(baris<3);

    //hasil
    baris=0;
    do{

        kolom=0;
        while(kolom<3)
        {
            TabHasil[kolom][baris]=MatA[kolom][baris]+MatB[kolom][baris];
            cout<<TabHasil[kolom][baris];
            kolom=kolom+1;
        }
        baris=baris+1;
    }while(baris<3);
}
