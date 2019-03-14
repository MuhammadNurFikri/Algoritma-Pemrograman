//Program mengurutkan dari yang terbesar ke terkecil
#include <iostream>

using namespace std;

void SelectionSort(double arr[], int n)
{
    //Deklarasi
    int PosMin;
    double tmp;

    //Mengurutkan
    for (int i=0; i<n-1; i++)
    {
       PosMin = i;
       for (int j=i+1; j<n; j++)
        {
         if(arr[j]>arr[PosMin])
            PosMin = j;
        }

        if (PosMin!=i)
        {
            tmp = arr[i];
            arr[i] = arr[PosMin];
            arr[PosMin] = tmp;
        }
    }
}

//Angka yang sudah urut
void PrintArray(double arr[], int length)
{
     for (int i=0; i<length; i++)
     {
        cout << arr[i] << "\t";
     }
     cout << endl;
}

int main()
{
    //Deklarasi
    int length = 5;
    double arr[5] = {3.8, 2.9, 3.3, 4.0, 2.4};

    //Tampilan diawal
    cout << "Program Sorting Dari Terbesar Ke Terkecil\n";
    cout << "=========================================\n" << endl;

    //Menampilkan angka yang sudah diurutkan
    cout << "Urutan sesudah disorting:" << endl;
    PrintArray(arr, length);

    return 0;
}

