/*judul
	Galih putra pratama
    Dasar type bentukan
    kasus jam waktu tanggak=l
    yg masuk ke ruangan ini mempunyai wqktu hadir yg beragam
    kita merekam waktu nmasuk ke lab per siswa
*/
#include <iostream>
using namespace std;

//kamus
    int i,y;
    struct Jam{
        int jam,menit,detik;
	};
    int JamDatang[1000];

//deksripsi
main()
{
cout<<"pendataan jam hadir\n";
cout<<"input berapa orang yg ingin didata jam\n";cin>>y;
i=1;
while(i<=y){
    cout<<"Orang ke "<<i<<endl;
    cout<<"input jam\n";
    cin>>JamDatang[i].jam;
    cout<<endl;
    cout<<"input menit\n";
    cin>>JamDatang[i].menit;
    cout<<endl;
    cout<<"input detik\n";
    cin>>JamDatang[i].detik;
    cout<<endl;

}
//output
i=1;
while(i<=y){
    cout
    cout<<"orang ke "<<i<<endl;
    cout<<"masuk pada pukul: "<<endl;
    cout<<"Jam: "JamDatang[i].jam<<endl;
    cout<<"menit: "JamDatang[i].menit<<endl;
    cout<<"detik: "JamDatang[i].detik<<endl;
}
}

