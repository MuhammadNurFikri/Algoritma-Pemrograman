#include<conio.h>
#include<iostream>
#include<windows.h>

using namespace std;

int main()
{
    int a;
    system("color A");
A:
    cout<<" "<<endl;
    cout<<"            SILAHKAN PILIH PROGRAM DIBAWAH INI "<<endl;
    cout<<" "<<endl;
    cout<<" 1. explorer "<<endl;
    cout<<" 2. Notepad "<<endl;
    cout<<" 3. exit "<<endl;
    cout<<" "<<endl;
    cout<<"    Masukan Pilihan anda : ";
    cin>>a;
    cout<<" "<<endl;
    if(a==1)
    {
        cout<<"     Microsoft word telah terbuka "<<endl;
        system("start explorer.exe");
        getch();
        goto A;
    }
    else if(a==2)
    {
        cout<<"   notepad telah terbuka "<<endl;
        system("notepad");
        getch();
        goto A;
    }
    else if(a==3)
    {
        system("exit");
    }
    else
    {
        cout<<" yang anda masukan salah "<<endl;
        cout<<" "<<endl;
        getch();
        goto A;
    }
    getch();
    return 0;
}
