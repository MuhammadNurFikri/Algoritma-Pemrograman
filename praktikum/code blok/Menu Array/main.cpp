//Program Membuat Pilihan Menggunakan Arrayq
#include <iostream>

using namespace std;

int main()
{
    //mendeklaasikan variable yang digunakan
	int pilihan, jumlah, mean = 0;
	int bilangan[10];
	//perulangan untuk melakukan proses dari pilihan menu yang tersedia
	bool isi = false;
	do
	{
        // menampilkan pilihan menu
		cout << "      Menu    "<< endl;
		cout << "1. Input Array" << endl;
		cout << "2. Tampil Array" << endl;
		cout << "3. Cari Nilai Minimum" << endl;
		cout << "4. Cari Nilai Maksimum" << endl;
		cout << "5. Hitung Rata-rata" << endl;
		cout << "Masukkan Pilihan : ";
		cin >> pilihan;
		cout << endl;

        //percabangan untuk memilih menu
		if(pilihan != 1 && isi == false)
		{
			cout << "anda harus memasukkan bilangan terlebih dahulu!!!"<< endl;
			pilihan = 1;
		}

		switch(pilihan)
		{
		case 1: // perulangan untuk memasukkan data ke dalam array
			for (int i = 0; i < 10; i++)
	    	{
		        cout << "Masukkan bilangan "<< i+1 << " : ";
		        cin >> bilangan[i];
	    	}
	    	isi = true;
	    	cout<<endl;
			break;
		case 2: // perulangan untuk menampilkan angka yang dimasukkan kedalam array
			for (int i = 0; i < 10; i++)
	    	{
		        cout << bilangan[i]<<" ";
	    	}
	    	cout<<endl;
			break;
		case 3: // perulangan untuk mencari nilai minimum dari angka yang ada di dalam array
			for (int i = 1; i < 10; i++)
	    	{
		       if(bilangan[0] > bilangan[i])
		           bilangan[0] = bilangan[i];
	    	}
	    	cout<<"Nilai Minimum: "<< bilangan[0] <<endl;
			break;
		case 4: // perulangan untuk menampilkan angka maksimum
			for (int i = 1; i < 10; i++)
	    	{
		       if(bilangan[0] < bilangan[i])
		           bilangan[0] = bilangan[i];
	    	}
	    	cout<<"Nilai Maksimum: "<< bilangan[0] <<endl;
			break;
		case 5: // perulangan untuk mencari nilai rata-rata
			for (int i = 0; i < 10; i++)
	    	{
		       jumlah =  jumlah + bilangan[i];

	    	}
	    	mean = jumlah / 10;
	    	cout<<"Nilai Rata-rata: "<< mean<<endl;
			break;
		default:
			cout << "ERROR! Masukkan angka yang benar!!!" <<endl;
			break;
		}

	} while (pilihan < 6);

    return 0;
}
