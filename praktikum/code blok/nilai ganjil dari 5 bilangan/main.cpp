//program menampilkan bilangan ganjil
#include <iostream>

using namespace std;

int main()
{
    //kamus atau deklarasi
    int tabArray[5];
    int i;


    //melakukan perulangan i sebanyak 5 kali
    for (i=0;i<5;i++){
        cout << "Masukkan bilangan " << i+1 << " : ";
        cin >>tabArray[i];}
    cout << endl;

    // untuk menentukan biangan ganjil
    cout << "Bilangan yang ganjil adalah ";
    cout << endl;

    //Rumus untuk mencari bilangan ganjil dari data yang di masukkan
    for (i=0;i<5;i++){
         if(tabArray[i]%2!=0){
            cout << tabArray[i] << " ";}
         }


    return 0;
}
