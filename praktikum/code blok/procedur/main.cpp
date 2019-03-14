#include <iostream>

using namespace std;

void hitungPersegiPanjang(int p, int l) {
    int L, K;
    L = p*l;
    K = (2*p) + (2*l);
    cout << "Luas : " << L << endl;
    cout << "Keliling : " << K << endl;
}
int main() {
    int p, l;
    cout << "Panjang : ";
    cin >> p;
    cout << "Lebar : ";
    cin >> l;

    hitungPersegiPanjang(p,l);
    return 0;
}
