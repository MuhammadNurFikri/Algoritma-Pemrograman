// ================ Program Konversi Bilangan Basis 16 (hex) =========================
#include <iostream>// untuk bisa menggunakan/menjalankan cout,cin,endl,ends.

using namespace std;// untuk mempersingkat penulisan cin,cout,endl,dll.

int main()// untuk menjalankan fungsi pertama dalam program.
{
    // ======= Deklarasi ======
    int ANGKA;// ini sialisasi variable, untuk membaca tipe bilangan bulat.

    // ========== ISI ===========
    cout << "Program Konversi Basis Bilangan\n";// cara memanggil variabel dan menampilkan isi dari variabel ke layar.
    cout << "-------------------------------\n";// cara memanggil variabel dan menampilkan isi dari variabel ke layar.
    cout << "Masukan sebuah bilangan : ";cin >> ANGKA;// cara memanggil variabel menggunakan inputan " cin "

    cout << "Hasil konversi : " << hex << ANGKA << endl;// cara memanggil variabel dan menampilkan isi dari variabel ke layar.

    return 0;/* fungsi main() ini dapat mengembalikan nilai 0 ke system operasi yang menandakan bahwa program tersebut,
                berjalan dengan baik tanpa adanya kesalahan. */
}
