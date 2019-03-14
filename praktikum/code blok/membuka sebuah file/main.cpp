#include <fstream>
#include <iostream>
using namespace std;
int main() {
char FirstName[30], LastName[30];
int Age; char FileName[20];
cout << "Enter the name of the file you want to open: ";
cin >> FileName;
ifstream Students(FileName);
Students >> FirstName >> LastName >> Age;
cout << "\nFirst Name: " << FirstName;
cout << "\nLast Name: " << LastName;
cout << "\nEnter Age: " << Age;
cout << "\n\n";
return 0;
}
