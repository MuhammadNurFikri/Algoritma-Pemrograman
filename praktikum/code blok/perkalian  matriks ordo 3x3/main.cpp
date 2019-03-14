//Program Perkalian Matriks ordo 3*3
#include <iostream>

using namespace std;

int main()
{
    //Mendeklarasikan Variable
    int a[3][3];
    int b[3][3];
    int c[3][3];
    int baris,kolom,d;

    //Perulangan untuk memasukan matriks A
    cout<<"Matriks A"<<endl;
    for(baris=0;baris<3;baris++){
        for(kolom=0;kolom<3;kolom++){
            cout<<"["<<kolom<<","<<baris<<"] : ";
            cin>>a[baris][kolom];
        }
        cout<<endl;
    }
    //perulangan untuk memasukkan matriks B
    cout<<"Matrik B"<<endl;
    for(baris=0;baris<3;baris++){
        for(kolom=0;kolom<3;kolom++){
            cout<<"["<<kolom<<","<<baris<<"] : ";
            cin>>b[baris][kolom];
        }
        cout<<endl;
    }
    //digunakan untuk menampilkan hasil dari matrisk A dan B yang sudah dimasukkan
    cout<<"Matriks A\n";
    for(baris=0;baris<3;baris++){
        for(kolom=0;kolom<3;kolom++){
            cout<<a[baris][kolom]<<" ";
        }
        cout<<endl;
    }
    cout<<"Matriks B\n";
    for(baris=0;baris<3;baris++){
        for(kolom=0;kolom<3;kolom++){
            cout<<b[baris][kolom]<<" ";
        }
        cout<<endl;
    }
    //perulangan untuk mengalikan matriks A dan B
    cout<<"Perkalian Matriks A dan B"<<endl;
    for(baris=0;baris<3;baris++){
        for(kolom=0;kolom<3;kolom++){
            c[baris][kolom]=0;
            for(d=0;d<3;d++){
                c[baris][kolom]+=a[baris][d]*b[d][kolom];
            }
        }
    }
    //menampilkan hasil dari perkalian matriks A dan B
    for(baris=0;baris<3;baris++){
        for(kolom=0;kolom<3;kolom++){
            cout<<c[baris][kolom]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
