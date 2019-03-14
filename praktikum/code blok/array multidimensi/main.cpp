#include <iostream>

using namespace std;

int main()
{
    int a[5] = {1,2,3,4,5};
    char b[5] = {'a','b','c','d','e'};
    string c[5] = {"agus","reno","firman","tika","hasan"};
    float d[5] = {2.4,5.6,1.9,3.6,6.6};

    for(int i = 0; i < 5; i++) {
        cout << d[i] << "\n";
    }
    return 0;
}
