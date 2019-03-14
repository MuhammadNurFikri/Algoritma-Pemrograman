//Program yang mengurutkan beberapa karakter urutan ascending dan descending
#include<iostream>
#include <windows.h>

using namespace std;

void bub_sort(char arr[],int length)
{
    //Deklarasi
    bool not_sort = true;
    int j=0;
    char tmp;

    //Mengurutkan untuk ascending
    while (not_sort)
    {
        not_sort = false;
        j++;
        for (int i=0;i<length-j;i++)
        {
            if (arr[i]>arr[i+1])
            {
                tmp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = tmp;
                not_sort = true;
            }
        }
    }
}

//Urutan ascending
void print_array(char b[], int length)
{
    for(int i=0;i<length;i++)
    {
       cout << b[i] << "\t";
    }
    cout << endl;
}

//Mengurutkan untuk descending
void bub_sort1z(char brr[],int length)
{
    //Deklarasi
    int i,j;
    char tmp;

    for (int i=1; i<length;i++)
    {
        j=i;
        while (j>0 && brr[j-1]<brr[j])
            {
                tmp = brr[j];
                brr[j] = brr[j-1];
                brr[j-1] = tmp;
                j--;
            }
    }
}

//Urutan descanding
void print_array1z (char b[], int length)
{
    for(int i=0;i<length;i++)
    {
        cout << b[i] << "\t";
    }
    cout << endl;
}

int main()
{
    //Deklarasi
    int length=5;
    int i,z;
    char a [5];
    char b[5];

    //Tampilan diawal
    cout << "Program Sorting Ascending dan Descending\n";
    cout << "========================================\n" << endl;

    //memasukkan angka banyaknya karakter
    cout << "input (n) = ";
    cin >> z;

    //Memasukkan karakter
    for (i=0;i<z;i++)
    {
        cout << "Karakter ke-" << i+1 << ": " ;
        cin >> a[i];
    }
    cout << endl;

    //Menampilkan karakter sebelum diurutkan
    cout << "Urutan Karakter Sebelum Sorting: " << endl;
    for (i=0;i<5;i++)
    {
        cout << a[i] << "\t";
    }
    bub_sort(a, length);
    cout << endl;

    //Menampilkan karakter urutan ascending
    cout << "Urutan Karakter setelah Ascending sort: " << endl;
    print_array(a, length);
    bub_sort1z  (a, length);
    cout << endl;

    //Menampilkan karakter urutan descending
    cout << "Urutan Karakter setelah Descending sort: " << endl;
    print_array1z(a, length);

    return 0;
}
