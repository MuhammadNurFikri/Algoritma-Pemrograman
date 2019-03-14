//Program mengurutkan menurut alfabet
#include <iostream>
#include<string>

using namespace std;

void bubble_sort(string arr[], int length)
{
    //Deklarasi
    bool not_sorted = true;
    int j=0;
    string tmp;

    //Mengurutkan
    while (not_sorted)
    {
        not_sorted = false;
        j++;
        for(int i = 0; i < length - j; i++)
        {
            if(arr[i] > arr[i + 1])
            {
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i+1] = tmp;
                not_sorted = true;
            }
        }
    }

}

//Nama yang sudah urut
void print_array(string a[], int length)
{
    for(int i=0; i<length; i++){
        cout<< a[i] <<"\t";
    }
    cout<<endl;
}

int main()
{
    //Deklarasi
    int length = 10;
    string a[] = {"siti", "situ", "sana", "ana", "ani", "caca", "cici", "dida", "dodo", "dadi"};

    //Tampilan diawal
    cout << "Program Sorting Menurut Alfabet\n";
    cout << "=========================================\n" << endl;

    //Menampilkan nama-nama yang sudah diurutkan
    cout << "Urutan sesudah disorting :" << endl;
    print_array(a, length);

    return 0;
}
