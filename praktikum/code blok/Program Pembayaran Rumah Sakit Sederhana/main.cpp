//PROGRAM PEMBAYARAN RUMAH SAKIT SEDERHANA

#include <iostream>
#include <cstdlib>
using namespace std;


int main ()
{
    char nama[10];
    int lamamenginap;
    int pilh_kamar;
    int tarif_kamar;
    string nama_kamar;
    string nama_dokter;
    int pilih_dokter;
    int tarif_dokter;
    char lagi;

    awal:
    cout<<"============Program Pembayaran=============="<<endl;
    cout<<"========Rumah Sakit Sumber Rejeki==========="<<endl;
    cout<<"===============Bagian THT==================="<<endl;
    cout<<endl;
    cout<<"===============Data Pribadi================="<<endl;
    cout<<"Masukkan nama anda = ";
    cin>>nama;
    cout<<"Masukkan Lama Menginap = ";
    cin>>lamamenginap;
    cout<<endl;
    cout<<"===============Pilih Kamar================="<<endl;
    cout<<"1.Kelas I   "<<endl;
    cout<<"2.Kelas II  "<<endl;
    cout<<"3.Kelas III "<<endl;
    cout<<"Pilih Jenis Kamar Anda[1-3] =";
    cin>>pilh_kamar;
    switch(pilh_kamar)
    {

    case 1:
     tarif_kamar=1000;
     nama_kamar="Kelas I";
     cout<<"Anda Memilih Kamar Kelas I"<<endl;
     cout<<"Tarif 1000 Rupiah"<<endl;
     break;

    case 2:
     tarif_kamar=2000;
     nama_kamar="Kelas II";
     cout<<"Anda Memilih Kamar KelasII"<<endl;
     cout<<"Tarif 2000 Rupiah"<<endl;
     break;

    case 3:
     tarif_kamar=3000;
     nama_kamar="KelasIII";
     cout<<"Anda Memilih Kamar Kelas III"<<endl;
     cout<<"Tarif 3000 Rupiah"<<endl;
     break;

    default:
    cout<<"Tidak Tersedia";
    }

    cout<<endl;
    cout<<"===============Pilih Dokter================="<<endl;
    cout<<"1.Dokter Andri"<<endl;
    cout<<"2.Dokter Sani"<<endl;
    cout<<"Masukkan Pilihan Anda[1-2] =";
    cin>>pilih_dokter;

    switch(pilih_dokter){
    case 1:
      tarif_dokter=1000;
      nama_dokter="Dokter Andri";
      cout<<"Anda Memilih Dokter Andri"<<endl;
      cout<<"Tarif 1000 Rupiah"<<endl;
      break;

    case 2:
      tarif_dokter=2000;
      nama_dokter="Dokter Andri";
      cout<<"Anda Memilih Dokter Sani"<<endl;
      cout<<"Tarif 2000 Rupiah"<<endl;
      break;
    default:
        cout<<"Tidak Tersedia"<<endl;
    }
    cout<<endl;
    cout<<"==========Informasi Pembayaran=============="<<endl;
    cout<<"Nama Anda            :"<<nama<<endl;
    cout<<"Lama Menginap        :"<<lamamenginap<<" Hari"<<endl;
    cout<<"Jenis Kamar          :"<<nama_kamar<<endl;
    cout<<"Dokter               :"<<nama_dokter<<endl;
    cout<<"Yang Harus Dibayar   :"<<lamamenginap*(tarif_kamar+tarif_dokter)<<" Rupiah"<<endl;
    cout<<endl;
    cout<<"Ingin Mengulangi Lagi (Y/N)?";
    cin>>lagi;
    if(lagi=='y' || lagi=='Y'){
        system("cls");
        goto awal;
    }
    if(lagi=='n' || lagi=='N'){
        system("cls");
        goto selesai;
    }
    selesai:
    cout<<"Terima Kasih Atas Kunjungan Anda di Rumah Sakit Sumber Rejeki"<<endl;

return 0;
}
