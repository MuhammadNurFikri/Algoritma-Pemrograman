#include <iostream>
#include <string>
#include <stdio.h>
#include <conio.h>

using namespace std;

int Function1(int func1)
{
	func1++;
	return func1;
}

int Function2(int func2)
{
	func2++;
	return func2;
}

int Function3(int func3)
{
	cout << "CTRL-C was pressed..\nEnding program.." << endl << endl;
	return func3;
}

int Function4(int func, string calling)
{
	cout << "Zeroing out " << calling << ".." << endl << endl;
	func=0;
	return func;
}

int main()
{
	char key;
	int call1=0,call2=0;
	do
	{
		cout << "Enter a '1', '2', or '0' character. Or press Ctrl-C to end program" << endl;
		key = _getch();
		switch(key)
		{
		case 49: //call to function 1
			{
				call1 = Function1(call1);
				cout << "call1 = " << call1 << endl;
				break;
			}
		case 50://call to function 2
			{
				call2 = Function1(call2);
				cout << "call2 = " << call2 << endl;
				break;
			}
		case 48://call to function 4
			{
				call1 = Function4(call1, "call1");
				call2 = Function4(call2, "call2");

				cout << "call1 now is " << call1 << " and call2 is " << call2 << " " << endl;
				break;
			}
		case 3:// Control-C is ASCII 3
			{
				Function3(key);
				break;
			}
		default:
			{
				cout << "** Error ** Only a 1, 2, 0 or Ctrl-C is recognized.." << endl << endl;
			}
		}
	}while (key!=3);
}
