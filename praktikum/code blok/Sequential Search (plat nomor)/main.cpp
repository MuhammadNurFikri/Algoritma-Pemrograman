//              Program Mengecek Plat Nomor Menggunakan Sequential Search
#include <iostream>

using namespace std;

int sequential(string data[],int n,string k){
    //Deklarasi
    int posisi, i,ketemu;
    // Algoritma
    if(n<=0)
        posisi =0;
    else {
        ketemu =0;
        i=1;
        while((i<n-1)&&!ketemu){
            if (data[i]==k){
                posisi=i;
                ketemu=1;
            }
            else{
                i++;
            }
            if(!ketemu){
                posisi=-1;
            }
        }
    }
    return posisi;
}

int main(){
    //Deklarasi
    int n         =10;
    string data[] ={"R 300 SR","R 1234 DJ","R 3218 RR","R 701 LP","R 007 TU","R 3 ST","R 999 RT","R 210 RO","R 1111 II","R 4987 LH"};
    string k      ="R 999 RS";

    int posisi = sequential(data,n,k);

    // Algoritma
    if(posisi!=-1){
        cout<<"Plat Nomor "<<k<<" Terdapat Dalam Database"<<endl;
    }
    else{
        cout<<"Plat Nomor "<<k<<" Tidak Terdapat Dalam Database"<<endl;
    }
return 0;
}
