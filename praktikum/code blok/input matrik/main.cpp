#include <iostream>

using namespace std;

int main()
{
    int mat[2][2];
    int matA[2][2];
    int matB[2][2];
    int matC[2][2];
    int baris, kolom;
    //Input
    for(baris = 0; baris < 2; baris++) {
        for(kolom = 0; kolom < 2; kolom++) {
        cout << "[" << baris << "," << kolom << "] : ";
        cin >> mat[baris][kolom];
    }
    cout << endl;
    }

    //Output
    cout << endl << "Matriks Penjumlahan : " << endl;
    for(baris = 0; baris < 2; baris++) {
        for(kolom = 0; kolom < 2; kolom++) {
            matC[baris][kolom] = mat[baris][kolom] + mat[baris][kolom];
            cout << mat[baris][kolom] << "+" << mat[baris][kolom] << "=" << matC[baris][kolom] << " ";
        }
    }
        cout << endl;

    return 0;
}
