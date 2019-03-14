#include <conio.h>
#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{
 cout<<"tanpa goto xy";
    gotoxy(5,16);
    cout<<"ini kolom ke 5 baris ke 16";
    gotoxy(18,3);
 cout<<"ini kolom ke 18 baris ke 3";
    getch();
}
