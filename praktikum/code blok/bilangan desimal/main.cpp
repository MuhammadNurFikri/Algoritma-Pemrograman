// ======================== Membuat Program Bilangan Desimal ================================
#include <iostream>// untuk bisa menggunakan/menjalankan cout,cin,endl, dan ends.
#include <iomanip>// untuk menampilkan perintah Setiosflags.

using namespace std;// untuk mempersingkat penulisan cin,cout,endl,dll.

int main()// untuk menjalankan fungsi pertama dalam program.
{
    // ======= Deklarasi ======
    float angka;// ini sialisasi variable, untuk membaca tipe bilangan desimal.

    // ========== ISI ===========
    cout << "Masukan sebuah bilangan : ";cin >> angka;// cara memanggil variabel menggunakan inputan " cin "

    cout << setiosflags(ios::fixed); // untuk mengatur jumlah digit desimal dibelakang koma.
    cout << "Hasil : " << setprecision(2) << angka << endl;/* untuk mengatur 2 digit angka dibelakang koma
                                                               dan menampilakan hasilnya. */

    return 0;/* fungsi main() ini dapat mengembalikan nilai 0 ke system operasi yang menandakan bahwa program tersebut,
                berjalan dengan baik tanpa adanya kesalahan. */
}
