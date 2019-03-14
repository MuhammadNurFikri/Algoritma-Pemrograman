#include <iostream>
#include <conio.h>
#include <dir.h>
#include <process.h>
#include <stdio.h>
#include <windows.h>
#include <cstdlib>
#include <sys/stat.h>

using namespace std;

int main()
{
    int check;
    string path = "f:/";
    string dirname;
    string s3;
    const char *pathanddir;
    system("cls");

    // write more code that uses str3

    cout << "Masukkan Nama Folder : ";
    cin >> dirname;

    s3 = path + dirname;
    pathanddir = s3.c_str();

//    int length = strlen(path) + strlen(dirname) + 1;
//    pathanddir = malloc(length * sizeof(char));
//    snprintf(pathanddir, length, path, dirname);

    check = mkdir(pathanddir); //bikin folder
//    check = rmdir(pathanddir); //hapus folder

    // check if directory is created or not
    if (!check)
        printf("Directory created\n");
    else {
        printf("Unable to create directory\n");
        exit(1);
    }

    getch();
//    free(pathanddir);
    system("dir/p");
    getch();
}
