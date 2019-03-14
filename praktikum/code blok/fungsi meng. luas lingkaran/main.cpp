// Program Menghitung luas lingkaran menggunakan fungsi
#include <iostream>

using namespace std;
    // Deklarasi
    int luas(float r){
    float luas;
    // Algoritma
    luas = 2 * 3.14 * r ;
    return luas;   // Mengembalikan ke fungsi luas
}
int main()
{
    int r;

    cout << "Menghitung Luas Lingkaran menggunakan FUNGSI\n";
    cout << "Masukan jari jari : ";
    cin  >> r; // Input r (jari jari)

    cout << "Luas Lingkaran Adalah : " << luas(r) << " cm2"; // Menampilkan fungsi luas(r)
    return 0;
}
