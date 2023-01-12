//judul

//kamus
#include <iostream>
using namespace std;
int DATANE[7];
int x,y;

//deksripsi
main()
{
    x=0;
    while(x<7)
    {
        cin>>DATANE[x]<<endl;
        x=x+1;
    }
    y=0;
    while(y<7){
        cout<< DATANE[y]<<endl;
        y=y+1;
    }

}
