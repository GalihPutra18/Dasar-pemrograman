//judul
    //program pendataan nilai pada siadin dosen
    //programmer galih putra pratama

//kamus
#include <iostream>
using namespace std;

string NIM;
float N_UTS,N_UAS;
//deskripsi
main()
{
    cout<<"Masukan NIM anda[3 digit awal dari NIM,contoh:A12]:"; cin>>NIM;
    cout<<endl;
    cout<<"Masukkan nilai UTS: "; cin>>N_UTS;
    cout<<endl;
    cout<<"Masukkan nilai UAS: ";cin>>N_UAS;
    if(NIM=="A11")
    {
        cout<<"Teknik Informatika S1\n";
    }
    else if(NIM=="A12")
    {
        cout<<"Sistem informasi S1\n";
    }
    else if(NIM=="A14")
    {
        cout<<"DKV S1\n";
    }
    else if(NIM=="A15")
    {
        cout<<"Ilmu Komunikasi S1\n";
    }
    else if(NIM=="A22")
    {
        cout<<"Teknik Informatika D3\n";
    }
    else if(NIM=="A23")
    {
        cout<<"Film dan TV D3\n";
    }
    else if(NIM=="A24")
    {
        cout<<"Penyiaran\n";
    }
    else
    {
        cout<<"tidak diketahui\n";
    }

    //menentukan nilai huruf
    if(N_UTS>=85&&N_UTS<=100)
    {
        cout<<"Nilai kamu A\n";
    }
    else if(N_UTS<=84&&N_UTS>=70)
    {
        cout<<"Nlai kamu B\n";
    }
    else if(N_UTS>=60&&N_UTS<=69)
    {
        cout<<"Nilai kamu C\n";
    }
    else if(N_UTS<=59&&N_UTS>=50)
    {
        cout<<"Nilai kamu D\n";
    }
    else if (N_UTS<=49)
    {
        cout<<"Nilai kamu E\n";
    }
    else
    {
        cout<<"Diluar jangkauan range\n";
    }
}
