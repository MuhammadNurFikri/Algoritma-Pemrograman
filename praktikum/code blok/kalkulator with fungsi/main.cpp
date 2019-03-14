// Program kalkulator menggunakan fungsi
#include <iostream>

using namespace std;
// Deklarasi
    int kal(float a, float b, int aritmatika){
    float hasil = 1;
// Algoritma
    if ( aritmatika == 1 ){                 //gunakan fungsi if untuk mengeksekusi sesuai inputan user
        cout << "Bilangan pertama = ";
        cin  >> a;                          //input a
        cout << "Bilangan kedua = ";
        cin  >> b;                          //input b
        hasil = a + b;                      //deklarasi rumus
        cout << "Hasil penjumlahan = ";
    }
    else if ( aritmatika == 2 ){            //keterangan sama
        cout << "Bilangan pertama = ";
        cin  >> a;                          //input a
        cout << "Bilangan kedua = ";
        cin  >> b;                          //input b
        hasil = a - b;                      //deklarasi rumus
        cout << "Hasil pengurangan = ";
    }
    else if (aritmatika == 3 ){             //keterangan sama
        cout << "Bilangan pertama = ";
        cin  >> a;                          //input a
        cout << "Bilangan kedua = ";
        cin  >> b;                          //input b
        hasil = a * b;                      //deklarasi rumus
        cout << "Hasil perkalian = ";
    }
    else if ( aritmatika == 4 ){            //keterangan sama
        cout << "Bilangan pertama = ";
        cin  >> a;                          //input a
        cout << "Bilangan kedua = ";
        cin  >> b;                          //input b
        hasil = a / b;                      //deklarasi rumus
        cout << "Hasil pembagian = ";
    }
    else if ( aritmatika == 5 ){            //keterangan sama
        cout << "Bilangan = ";
        cin  >> a;                          //input a
        cout << "pangkat = ";
        cin  >> b;                          //input b
        if (b == 0){                        //gunakan fungsi if untuk perpangkatan
        hasil = 1;
        }
        else {
            for (int i=1; i<=b; i++){       //deklarasi rumus
            hasil = hasil*a;
            }
        }
        cout << "Hasil perpangkatan =  ";
        }
    else {cout << " -1 ";
    }
    return hasil;

}
int main()
{
    // Deklarasi
    float a,b;
    int aritmatika;
    cout << "KALKULATOR\n";
    // Pilihan aritmatika
    cout << "1. Penjumlahan\n";
    cout << "2. Perngurangan\n";
    cout << "3. Perkalian\n";
    cout << "4. Pembagian\n";
    cout << "5. Perpangkatan\n";

    cout << "Masukan pilihan : ";
    cin  >> aritmatika;                             //input aritmatika

    cout << kal(a,b,aritmatika);                    //memanggil fungsi
    return 0;
}
