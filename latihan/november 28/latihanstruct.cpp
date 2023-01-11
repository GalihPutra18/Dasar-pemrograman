#include <iostream>
using namespace std;

struct guru{
    string nama;
    int umur;
};

struct mapel{
    string mapel;
    int kkm;
};

main()
{
    cout<<"input data"<<endl;

    //input data mapel ke-1
    mapel bing;
    cin>>bing.mapel;
    cout<<bing.mapel;
}
