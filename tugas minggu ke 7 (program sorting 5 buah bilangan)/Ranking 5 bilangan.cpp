//judul
    //program

//kamus
#include <iostream>
using namespace std;
int bil[6],n,a,b,c,d,temp1,temp2;  //menggunakan int karena semua variabel hanya berisi angka

//deksirpsi
int main()
{
    for (n=1;n<=5;n++)  //menggunakan perulangan for, pengurutan angka dengan banyak 5 angka
    {
        cout << "bilangan ke ["<< n <<"]: ";    //menampilkan output inputan sesuai n variabel perulangan dari 1 sampai 5
        cin >> bil[n];  //menyimpan inputan ke dalam array sesuai indexnya mulai dari index 1 sampai index 5 sesuai n batas perulangan
    }
    cout << "hasil pengurutan bilangan kecil ke besar : " << endl;
    for (a=1;a<=5;a++){
        for (b=1;b<=5;b++){ //menggunakan perulangan for bertingkat untuk proses pengurutan dan menggunakan batasan perulangan yg sama
            if (bil[a]<bil[b]){ //pengkondisian if yg berfungsi mengurutkan dari kecil ke besar
                temp1=bil[a];   //merupakan kondisi untuk menukar posisi angka atau bilangan
                bil[a]=bil[b];
                bil[b]=temp1;
            }
        }
    }
    for (a=1;a<=5;a++){ //untuk menampilkan hasil pengurutan
        cout << bil[a] <<",";
    }
    cout << endl;
    cout << "hasil pengurutan bilangan besar ke kecil : " << endl;
    for (c=1;c<=5;c++){
        for (d=1;d<=5;d++){
            if (bil[c]>bil[d]){
                temp2=bil[c];
                bil[c]=bil[d];
                bil[d]=temp2;
            }
        }
    }
    for (c=1;c<=5;c++){
        cout << bil[c] <<",";
    }
    return 0;
}
