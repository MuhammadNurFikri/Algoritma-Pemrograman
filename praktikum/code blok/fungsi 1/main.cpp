#include <iostream>

using namespace std;

int luas(int p, int l) {
    int luas;
    luas = p * l;
    return luas;
}
int main()
{
    int p, l;
    cout << "Masukkan panjang persegi panjang : ";
    cin >> p;
    cout << "Masukkan lebar persegi panjang : ";
    cin >> l;
    cout << "Luas  persegi panjang tersebut adalah " << luas(p,l);
    return 0;
}
