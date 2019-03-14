// Program Menampilkan bil. Ganjil Genap Menggunakan Fungsi
#include <iostream>

using namespace std;
// Deklarasi
    string cek( int n){
    string hasil;
// Algoritma
    if (n%2 == 0){
        hasil = "Genap";
    }
    else {
        hasil = "Ganjil";
    }
    return hasil;
}
int main()
{
    int n ;
    cout << "Menentukan Ganjil Genap dengan menggunakan Fungsi \n";
    cout << "Masukan N : ";
    cin  >> n;          //input n
    cout << "Bilangan yang anda masukkan adalah " <<cek(n);     // Pemanggilan fungsi cek(n)

    return 0;
}

