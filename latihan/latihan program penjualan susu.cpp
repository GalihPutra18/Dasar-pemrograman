//judul
    //Latihan program penjualan susu
    //Galih putra pratama

//kamus
#include <iostream>
using namespace std;
char KoSu;
string Ukuran,M;
int JB,H,JP,Po,TP;
float P;
//deskripsi
main()
{
    cout<<"\t\tPROGRAM PENJUALAN SUSU\n";
    cout<<"Masukan Kode Susu [1/2/3]\t : ";cin>>KoSu;
    cout<<"Masukan kode ukuran [S/M/L]\t : ";cin>>Ukuran;
    cout<<"Masukan Jumlah Beli\t : ";cin>>JB;

    switch(KoSu)
    {
    case '1':
        {
        M="Susu Indomilk";
        if(Ukuran=="S"||Ukuran=="s")
        {
            Ukuran="Small";
            H=5000;
        }
        else if(Ukuran=="M"||Ukuran=="m")
        {
            Ukuran="Medium";
            H=7500;
        }
        else if(Ukuran=="L"||Ukuran=="l")
        {
            Ukuran="Large";
            H=9500;
        }
        break;
        }
    case '2':
        M="Susu Dancow";
        if(Ukuran=="S"||Ukuran=="s")
        {
            Ukuran="Small";
            H=4500;
        }
        else if(Ukuran=="M"||Ukuran=="m")
        {
            Ukuran="Medium";
            H=6500;
        }
        else if(Ukuran=="L"||Ukuran=="l")
        {
            Ukuran="Large";
            H=8500;
        }
        break;
    case '3':
        M="Susu Sustagen";
        if(Ukuran=="S"||Ukuran=="s")
        {
            Ukuran="Small";
            H=9500;
        }
        else if(Ukuran=="M"||Ukuran=="m")
        {
            Ukuran="Medium";
            H=15500;
        }
        else if(Ukuran=="L"||Ukuran=="l")
        {
            Ukuran="Large";
            H=19500;
        }
    default:
        cout<<"Merk barang tidak diketahui"<<endl;
    }
    JP=H*JB;
    P=JP*0.1;
    if(JB>25){
        P=JB*H*0.1;
        Po=JB*H*0.05;
    }
    else{
        P=JB*H*0.1;
        Po=0;
    }
    TP=JP+P-Po;
    cout<<"\t\t STRUK PEMBAYARAN\n";
    cout<<"Merk Barang      : "<<M<<"\n";
    cout<<"Jenis Ukuran     : "<<Ukuran<<endl;
    cout<<"Jumlah Beli      : "<<JB<<endl;
    cout<<"Harga Barang     : "<<H<<endl;
    cout<<"Jumlah Pembayaran: "<<JP<<endl;
    cout<<"Potongan         : "<<Po<<endl;
    cout<<"Pajak            : "<<P<<endl;
    cout<<"Total pembayaran : "<<TP<<endl;
}
