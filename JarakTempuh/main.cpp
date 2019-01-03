#include <iostream>

using namespace std;

int main()
{
    float S,v,t;
    cout<< " ----Program Jarak Tempuh---- \n \n";
    cout<< " Masukkan Nilai Kecepatan (km/j)  =";
    cin>>v;
    cout<<"\n" ;
    cout<< " Masukkan Nilai Waktu (jam)       =";
    cin>>t;
    cout<<"\n" ;
    S=v*t;
    cout<< " jadi jarak tempuhnya adalah(km) =";
    cout<<S;
    cout<<"\n" ;

    return 0;
}
