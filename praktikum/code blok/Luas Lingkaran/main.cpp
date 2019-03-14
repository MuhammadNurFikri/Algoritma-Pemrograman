// ================ Program Menghitung Luas Lingkaran =========================
#include <iostream>// untuk bisa menggunakan/menjalankan cout,cin,endl,ends.

using namespace std;// untuk mempersingkat penulisan cin,cout,endl,dll.

int main()// untuk menjalankan fungsi pertama dalam program.
{
     // ======= Deklarasi ======
    int r;// ini sialisasi variable, untuk membaca tipe bilangan bulat.

    float luas,phi;// ini sialisasi variable, untuk membaca tipe bilangan desimal.

    phi = 3.14;// keterangan bahwa phi nya menggunakan 3,14

    // ========== ISI ===========
    cout << "Program Menghitung Luas Lingkaran\n";// cara memanggil variabel dan menampilkan isi dari variabel ke layar.
    cout << "---------------------------------\n";// cara memanggil variabel dan menampilkan isi dari variabel ke layar.
    cout << "Masukkan jar-jari : ";cin >> r;// cara memanggil variabel menggunakan inputan " cin "


    luas = phi*r*r;// rumus luas liangkaran.
    cout << "Luas lingkarannya adalah : " << luas;// cara memanggil variabel dan menampilkan isi dari variabel ke layar.

    return 0;/* fungsi main() ini dapat mengembalikan nilai 0 ke system operasi yang menandakan bahwa program tersebut,
                berjalan dengan baik tanpa adanya kesalahan. */
}
