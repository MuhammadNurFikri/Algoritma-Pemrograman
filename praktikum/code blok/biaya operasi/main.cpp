    // Program Menghitung Biaya Operasi
#include <iostream>


using namespace std;


int main()
{
    // ======= Deklarasi ======
    int pilih;

    // ========== ISI ===========
    // Menu yang akan ditampilkan di awal
    cout <<"        << MENU MENGHITUNG BIAYA OPERASI >>\n ";
    cout <<"\n";
    cout <<"1.Hitung Biaya Operasi Mata\n";
    cout <<"2.Hitung Biaya Operasi Jantung\n";
    cout <<"\n";
    // Menu yang akan dipilih
    cout <<"Masukkan Pilihan : ";
    cin >> pilih;
    cout <<"\n";

    if (pilih > 2){/* Kode ini akan berguna untuk membuat kondisi, dimana jika yang diinputkan adalah lebih dari 2,
                      kode akan menampilkan isi variable "KODE SALAH !"*/
    cout <<"KODE SALAH !";
    }

    if (pilih == 1){/* Kode ini akan berguna untuk membuat kondisi, dimana jika yang diinputkan adalah 1,
                       maka kode yang ada di dalamnya lah yang akan dieksekusi
                       kode akan menampilkan isi variable "Jenis Penayakit Mata"*/
    cout <<"Jenis Penayakit Mata";
    cout <<"\n";
    cout <<"1.Katarak\n";
    cout <<"2.Plus/Minus\n";
    cout <<"3.Silinder\n";
    cout <<"\n";
    // Menu yang akan dipilih
    cout <<"Masukkan Pilihan : ";
    cin >> pilih;

    switch (pilih) {// Melakukan switch pada variabel pilih

    case 1:// Case yang akan dieksekusi jika sesuai dengan yang diinputkan tadi
    cout <<"Biaya Operasi Mata Katarak = Rp. 7.500.000\n";
    break;

    case 2:// Case yang akan dieksekusi jika sesuai dengan yang diinputkan tadi
    cout <<"Biaya Operasi Mata Plus/Minus = Rp. 5.000.000";
    break;

    case 3:// Case yang akan dieksekusi jika sesuai dengan yang diinputkan tadi
    cout <<"Biaya Operasi Mata Silinder = Rp. 4.000.000";
    break;

    default:// Bagian ini akan dieksekusi jika semua case di atas tidak terpenuhi
    cout <<"Kode Salah!\n";
    break;
    }

    }else if (pilih == 2){/* Kode ini akan berguna untuk membuat kondisi, dimana jika yang diinputkan adalah 2,
                             maka kode yang ada di dalamnya lah yang akan dieksekusi
                             kode akan menampilkan isi variable "Jenis Penayakit Jantung"*/
    cout <<"Jenis Penayakit Jantung";
    cout <<"\n";
    cout <<"1.Jantung Koroner\n";
    cout <<"2.Katup Jantung\n";
    cout <<"3.Otot Jantung\n";
    cout <<"\n";
    // Menu yang akan dipilih
    cout <<"Masukkan Jenis Penyakit Jantung : ";
    cin >> pilih;

    switch (pilih) {// Melakukan switch pada variabel pilih

    case 1:// Case yang akan dieksekusi jika sesuai dengan yang diinputkan tadi
    cout <<"Biaya Operasi Jantung Koroner = Rp. 500.000.000";
    break;

    case 2:// Case yang akan dieksekusi jika sesuai dengan yang diinputkan tadi
    cout <<"Biaya Operasi Katup Jantung = Rp. 350.000.000";
    break;

    case 3:// Case yang akan dieksekusi jika sesuai dengan yang diinputkan tadi
    cout <<"Biaya Operasi Otot Jantung = Rp. 450.000.000";
    break;

    default:// Bagian ini akan dieksekusi jika semua case di atas tidak terpenuhi
    cout <<"Kode Salah!\n";
    break;
    }
    return 0;
}
}
