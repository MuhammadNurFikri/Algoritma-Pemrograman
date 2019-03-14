// Program Menghitung Bilangan Berpangkat
#include<iostream>

using namespace std;

int main()
{
    //======= Deklarasi ======
    int x,  i, n, hasil; // ini sialisasi variable, untuk membaca tipe bilangan bulat.
    i = 1; // ini sialisasi isi variable
    hasil = 1; // ini sialisasi isi variable

    //======= Isi ======
    cout<<"PROGRAM MENGHITUNG PANGKAT"<<endl;
    cout<<endl<<"Masukkan Angka : " ;cin>>x;// cara memanggil variabel menggunakan inputan " cin "
    cout<<endl<<"Masukkan Pangkat : ";cin>>n;// cara memanggil variabel menggunakan inputan " cin "

    //Perulangan untuk menentukan perpangkatan yang akan diinputkan
    for (i=1 ; i<=n; i++) {
    hasil = hasil * x; // Rumus menghitung bilangan berpangkat
    }
    cout<<endl<<"Hasilnya = "; // cara memanggil variabel dan menampilkan isi dari variabel ke layar.
    cout<<hasil;// cara menampilkan isi dari variabel ke layar.

    return 0;
    }

