#include <iostream>
using namespace std;
int main()
{
    int N,a;
    cout<<"Masukkan Angka = ";
    cin>>N;
    cout<<"Faktor Bilangan dari "<<N<<" adalah ";
    for(a=N;a>0;a--){ // Untuk dembuat deret angka dari N sampai 1
        if(N%a==0){ // Untuk Mod N dengan deret angka
            cout<<a<<" ";
        }
    }
    cout<<endl;
    return 0;
}
