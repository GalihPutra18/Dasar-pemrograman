#include <iostream> //merupakan standar input output operasi yang digunakan di c++ seperti cout atau cin
using namespace std;    //untuk menghemat waktu dalam mengetik code misal jika tidak menggunakan using namespace std
//yaitu kita harus mengetik std::cout

struct guru{
    string nama_guru;
    int umur;
};

struct mhs{
    string NIM;
    string nama_mhs;
    guru guru_mhs;
    int nilai;
};

char grades(int n){
    if(n>=85){
        return 'A';
    }else if(n>=70&&n<85){
        return 'B';
    }else if(n>=85&&n<70){
        return 'C';
    }else{
        return 'D';
    }
}

main()
{
    int jml;
    cout<<"jumlah mahasiswa: ";cin>>jml;
    mhs mahasiswa[jml];
    cout<<"Data mahasiswa"<<endl;

    //inputnya
    int a=0;
    while(a<jml){
        cout<<"Data mahasiswa ke-"<<a+1<<endl;
        cout<<"nim\t\t: ";cin>>mahasiswa[a].NIM;
        cout<<"nama\t\t: ";cin>>mahasiswa[a].nama_mhs;
        cout<<"nilai\t\t: ";cin>>mahasiswa[a].nilai;
        cout<<"nama guru mhs\t: ";cin>>mahasiswa[a].guru_mhs.nama_guru;
        cout<<"umur guru mhs\t: ";cin>>mahasiswa[a].guru_mhs.umur;
        a=a+1;
    }
    cout<<"============================================="<<endl;
    //output
    cout<<"output"<<endl;
    int b=0;
    while(b<jml){
        cout<<"Data mahasiswa ke-"<<b+1<<endl;
        cout<<"nim\t: "<<mahasiswa[b].NIM<<endl;
        cout<<"nama\t: "<<mahasiswa[b].nama_mhs<<endl;
        cout<<"nilai\t: "<<mahasiswa[b].nilai<<endl;
        cout<<"nilai\t: "<<grades(mahasiswa[b].nilai)<<endl;
        cout<<"nama guru mhs\t: ";cin>>mahasiswa[a].guru_mhs.nama_guru;
        cout<<"umur guru mhs\t: ";cin>>mahasiswa[a].guru_mhs.umur;
        cout<<endl;
        b=b+1;
    }
}
