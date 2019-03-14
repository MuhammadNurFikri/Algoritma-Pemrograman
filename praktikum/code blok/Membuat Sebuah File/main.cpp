#include <iostream>
#include <fstream>
using namespace std;

//DEKLARASI SUBPROGRAM
void PilihMode() ;
void IsiBacaSimpanMatriks() ;
void BacaFile() ;
void TutupProgram() ;
void UlangInputMode() ;

//PROGRAM UTAMA
int main() {
//Kamus Lokal
char ulang ;

//Algoritma
PilihMode();
cout <<  "Apakah Anda ingin mencoba mode lagi? (y/n) : " ;
cin >> ulang ;
if (ulang=='y' || ulang=='Y') {
main();
}
else {
cout << "Terimakasih Anda telah menggunakan layanan kami." << endl << "Created by AjickCyber." << endl ;
}

return 0;
}

//REALISASI SUBPROGRAM
//Prosedur PilihMode
void PilihMode(){
//Kamus Global
int mode ;

//Algoritma Prosedur
cout << "Pilih mode yang diinginkan :" << endl ;
cout << "1. Isi, baca, dan simpan." << endl ;
cout << "2. Baca file." << endl ;
cout << "3. Tutup program" << endl ;
cout << "Mode pilihan : " << endl ;
cin >> mode ;

//Analisis kasus dg Switch
switch (mode){
case 1 :
cout << "Mode 1 : " << endl ;
IsiBacaSimpanMatriks();
break;

case 2 :
cout << "Mode 2 : " << endl ;
BacaFile();
break;

case 3 :
cout << "Mode 3 :" << endl ;
TutupProgram();
break ;

default :
UlangInputMode();
break ;
  }
 }


//Prosedur IsiBacaSimpanMatriks

void IsiBacaSimpanMatriks(){
int i, j ;
char simpan ;
int Matriks[5][5];
ofstream File;

 //Algoritma
 // Mengisi matriks
cout << "1. Mangisi data ke dalam matriks dengan ordo 5 x 5." << endl ;
cout << "Masukkan data ke : " << endl ;
for(i=0;i<5;i++) {
 for(j=0;j<5;j++){
 cout << "Matriks dengan indeks " << i << " , " << j << " = " ;
 cin >> Matriks[i][j] ;
 }
cout << endl ;
}
 // Membaca Matriks
cout << "2. Membaca isi matriks dengan ordo 5 x 5 " << endl ;
for(i=0;i<5;i++) {
for(j=0;j<5;j++){
cout << Matriks[i][j] << "\t" ;
}
cout << endl << endl ;
}

 //Menyimpan Data Matrikas
cout << "2. Menyimpan data dari matriks ordo 5 x 5  ke dalam file eksternal " << endl ;
cout << "Apakah Anda ingin menyimpan data yang ada didalam matriks ke file eksterbal ? (y/n) : " << endl;
cin >> simpan ;
if(simpan=='y' || simpan=='Y'){
cout << endl << "File sudah tersimpan di FileMatriks.txt" << endl;
File.open("FileMatriks.txt");
for(i=0;i<5;i++) {
 for(j=0;j<5;j++){
 File << Matriks[i][j] << "\t" ;
 }
File << endl << endl;
}

File.close(); }
else { main(); }
}

//Prosedur BacaFile
void BacaFile(){
 //Kamus
ifstream file ;
int isi, sum=0 ;

 //Algoritma
cout << "Menampilkan data yang ada didalam file FileMatriks.txt" << endl ;
cout << "Data yang ada didalam file adalah : " << endl ;
file.open("FileMatriks.txt") ;
while(file >> isi ){
 cout << isi << "\t" ;
 sum++;
 if(sum==5){cout << endl << endl ;}
 if(sum==10){cout << endl << endl;}
 if(sum==15){cout << endl << endl;}
 if(sum==20){cout << endl << endl;}
 if(sum==25){cout << endl << endl;}
}
}


//Prosedur TutupProgram
void TutupProgram(){
char Close;
cout << "Apakah Anda yakin ingin menutup program ? (y/n) : " ;
cin >>  Close;
}

//Prosedur UlangInputMode
void UlangInputMode(){
 main();
}
