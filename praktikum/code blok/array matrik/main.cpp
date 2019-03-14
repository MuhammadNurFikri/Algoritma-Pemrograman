#include <iostream>

using namespace std;

int main()
{
    char mat[2][2] = {
        {'a','b'},

        {'c','d'}
    };
    int baris, kolom;
    for(baris = 0; baris < 2; baris++) {
        for(kolom = 0; kolom < 2; kolom++) {
            cout << mat[baris][kolom] << " ";
        }
        cout << endl;
    }
    return 0;
}
