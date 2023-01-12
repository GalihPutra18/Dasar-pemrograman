//judul
    //programmer gslih putrs
//kamus
#include <iostream>
using namespace std;
float A,Be,Ce;
//deskripsi
main()
{
cout<<"input nilai a: ";cin>>A;
cout<<endl;
cout<<"input nilai Be: ";cin>>Be;
cout<<endl;
cout<<"input nilai Ce: ";cin>>Ce;
cout<<endl;
cout<<"nilai a adalah: ";cin>>A;
cout<<endl;
cout<<"nilai Be adalah: ";cin>>Be;
cout<<endl;
cout<<"nilai Ce adalah: ";cin>>Ce;
cout<<endl;
if(A>Be&Be>Ce)
{
    cout<<A<<", "<<Be<<", "<<Ce;
}
else if(A>Ce&Ce>Be)
{
    cout<<A<<", "<<Be<<", "<<Ce;
}else if(Be>A&A>Ce)
{
    cout<<Be<<", "<<A<<", "<<Ce;
}
else if(Be>Ce&Ce>A)
{
    cout<<Be<<", "<<Ce<<", "<<A;
}
else if(Ce>A&A>Be)
{
    cout<<Ce<<", "<<A<<", "<<Be;
}
else if(Ce>Be&Be>A)
{
    cout<<Ce<<", "<<Be<<", "<<A;
}
else{
    cout<<"tidak diketahui";
}
}

