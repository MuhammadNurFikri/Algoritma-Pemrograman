// --- Identitas ---
//
// NAMA : Muhammad Nur Fikri
// NIM : 18102098
//
// --- --- ---

// POST TEST
// Bacalah soal posttest ini baik-baik.
// Terdapat dua soal di dalam posttest ini.
// Anda diberikan waktu berpikir 5 menit.
// Setelah itu, anda diberikan waktu mengerjakan selama 30 menit.
// Kerjakanlah posttest ini seefisien mungkin.
// Posttest ini dapat dikerjakan tidak lebih dari 5 baris kode program (atau bahkan kurang) untuk tiap soalnya.
// Gunakan strategi terbaik anda sebaik-baiknya.
// Selamat mengerjakan. ^^

#include <iostream>

using namespace std;

const int ada = 12;

// Tipe data bentukan
struct si {
	int kancil;
	float anak;
	double nakal;
	char suka;
	string mencuri;
	bool timun;
};

si anu[ada] = {
	{97, 0.975660943, 0.549328468, 'a', "aGe", true},
	{71, 0.648976584, 0.190146228, 'G', "GeX", true},
	{101, 0.123192612, 0.564017131, 'e', "eXn", false},
	{88, 0.271480643, 0.903350758, 'X', "Xnb", false},
	{160, 0.66057807, 0.299080795, 'n', "nbf", true},
	{148, 0.408859749, 0.760827774, 'b', "bfQ", false},
	{152, 0.701224347, 0.570969348, 'f', "fQQ", true},
	{131, 0.946504961, 0.2988402, 'Q', "QQf", true},
	{81, 0.48782237, 0.029556207, 'Q', "Qf^", false},
	{102, 0.515368585, 0.966019129, 'f', "f^|", true},
	{94, 0.132382156, 0.011730324, '^', "^|a", false},
	{124, 0.997093196, 0.991095354, '|', "|aG", true}
};

// 1. Buatlah fungsi dengan spesifikasi prototype sebagai berikut.
//
// string sebelahnya(string ini);
//
// Fungsi ini akan menerima masukan berupa string "ini"
// yang digunakan untuk mencari elemen "anu" yang mengandung member "mencuri" yang bernilai "ini".
// Setelah elemen "anu" yang dimaksud ditemukan, dia akan membaca elemen "anu" SETELAHNYA.
// Jika elemen "anu" SETELAHNYA tersebut ADA, maka dia akan MENGEMBALIKAN nilai member "mencuri" dari elemen SETELAHNYA tersebut.
// Jika elemen "anu" SETELAHNYA tersebut TIDAK ADA, atau TIDAK DITEMUKAN elemen "anu" bermember "ini",
// maka dia akan mengembalikan nilai string kosong "".
//
// Contoh:
// string itu = sebelahnya("GeX");
//
// maka nilai itu adalah "eXn".
// Akan tetapi,
//
// string itu = sebelahnya("ini");
//
// maka nilai itu adalah "".

string sebelahnya(string ini) {
    for(int i = 0;i<ada;i++){
        if(anu[i].mencuri == ini){
            return anu[i+1].mencuri;
        }
    }

    return "";

}

// 2. Buatlah prosedur dengan spesifikasi prototype sebagai berikut.
//
// void tampilkan(bool kebenaran);
//
// Prosedur ini akan menambilkan seluruh member {"kancil", "anak", "nakal", "suka"}
// dari elemen "anu" yang nilai member "timun"-nya bernilai "kebenaran".
//
// Contoh:
// tampilkan(true);
//
// maka hasilnya adalah
//	97 :: 0.975660943 :: 0.549328468 :: 'a'
//	71 :: 0.648976584 :: 0.190146228 :: 'G'
//	160 :: 0.66057807 :: 0.299080795 :: 'n'
//	152 :: 0.701224347 :: 0.570969348 :: 'f'
//	131 :: 0.946504961 :: 0.2988402 :: 'Q'
//	102 :: 0.515368585 :: 0.966019129 :: 'f'
//	124 :: 0.997093196 :: 0.991095354 :: '|'

void tampilkan(bool kebenaran) {

	for(int i = 0;i<ada;i++) {
        if(kebenaran){
            if(anu[i].timun){
                cout << anu[i].kancil << ":" << anu[i].anak << ":" << anu[i].nakal << ":" << anu[i].suka << endl;
            }
        } else {
        if(!anu[i].timun){
            cout << anu[i].kancil << ":" << anu[i].anak << ":" << anu[i].nakal << ":" << anu[i].suka << endl;
        }
           }
	}

}


// Jangan rubah bagian main ini.
// Bagian ini digunakan untuk mengecek hasil program.
int main() {
	cout << sebelahnya("f^|") << endl;
	tampilkan(false);

	return 0;
}


