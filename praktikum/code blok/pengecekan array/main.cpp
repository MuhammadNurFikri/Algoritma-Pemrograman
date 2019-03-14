//Program untuk melakukan pengecekan letak angka tersebut didalam array
#include <iostream>

using namespace std;

int main()
{
    //mendeklarasikan variable
    int daftar[5]={1,2,3,4,5};
    int a,i;

    cout << "Masukkan bilangan yang dicari : ";
    cin >> a ;

    for (i=0; i<5; i++)//perulangan untuk menmpilkan array
    {
        if(daftar[i] == a){ //jika bilangannya ada didalam array tersebut
        	cout<<"Bilangan anda tersimpan di urutan array ke "<<i;
		}
    }
    if(daftar[i]!=a){ //jika angka yang dimasukkan tidak sesuai dengan bilangan yang tersimpan didalam array
        cout<<"Bilangan anda tidak ada didalam array";
    }
    return 0;
}
