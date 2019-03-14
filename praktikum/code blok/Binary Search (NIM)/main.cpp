//                      Program Pencarian NIM Menggunakan Algoritma Binary Search
#include <iostream>

using namespace std;

int function_binary_search (int data [], int n, int k)
{
    //Deklarasi
    int atas, bawah, tengah, posisi;
    bool ada;

    ada     = false;
    bawah   = 0;
    atas    = n - 1;
    posisi  = -1;

    // Algoritma
    while (bawah <= atas)
        {
        tengah = (atas + bawah)/2;
        if(k == data[tengah])
            {
            posisi = tengah;
            break;
            }
        else if(k < data[tengah])  atas = tengah - 1;
        else if(k > data[tengah]) bawah = tengah + 1;
        }

    return posisi;
 }

int main()
{
    //Deklarasi
    int n       = 13;
    int data[] = {12102001,
                  12102002,
                  12102003,
                  12102004,
                  12102005,
                  12102006,
                  12102007,
                  12102008,
                  12102009,
                  12102010,
                  12102011,
                  12102012,
                  12102013};
    int k;
    cout << "Cari NIM  : ";
    cin >> k;
    int posisi = function_binary_search(data, n, k);

    // Algoritma
    if(posisi != -1)
        {
        cout << "NIM " << k << ". NIM Tersebut Berada Di dalam Kelas " << endl;
        }
    else
        {
        cout << "NIM " << k << ". NIM Tersebut Tidak Ada Di Dalam kelas " << endl;
        }
  return 0;
}
