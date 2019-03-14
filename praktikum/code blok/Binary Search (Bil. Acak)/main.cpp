//             Program Pencarian Untuk Bilangan Acak Dengan Menggunakan Algoritma Binary Search.
#include <iostream>

using namespace std;

int function_binary_search (int data [], int n, int k)
{
    // Dekalrasi
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
    // Deklarasi
    int n = 9;
    int data[] = { 21, 61, 28, 72, 44, 68, 37, 52, 75};
    int k;
    cout << "Cari Angka : ";
    cin >> k;
    int posisi = function_binary_search(data, n, k);

    // Algoritma
    if(posisi != -1)
        {
        cout << "kunci " << k << "  ditemukan pada posisi indeks ke-" << posisi << endl;
        }
    else
        {
        cout << "kunci " << k << " tidak ditemukan" << endl;
        }

    return 0;
}
