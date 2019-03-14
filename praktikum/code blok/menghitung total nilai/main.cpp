// Program Menghitung Nilai Total dari Bilangan yang Diinputkan
#include <iostream>

using namespace std;

int main()
{
    // ======= Deklarasi ======
    int b, a=0;// ini sialisasi variable, untuk membaca tipe bilangan bulat

    cout <<"Program Menghitung Nilai Total\n";// cara memanggil variabel dan menampilkan isi dari variabel ke layar
    cout <<"===============================\n";// cara memanggil variabel dan menampilkan isi dari variabel ke layar
    cout <<"Masukkan Jumlah bilangan : ";cin >> b; // cara memanggil variabel menggunakan inputan " cin "

    // perulangan untuk menentukan total bilangan yang akan diinputkan
    for (int c=b; c>=1; c--) {
    cout << c << "+"; // cara menampilkan isi dari variabel ke layar.
    a=a+c; // dimasukkan untuk menghitung nilai a
    }
    cout <<"\b";// digunakan untuk mundur satu spasi
    cout << " = " << a <<endl;// menampilkan hasil nilai dari a

    return 0;

}

