//                                              Program Anu Explorer
//-----------------------------------------------------------------------------------------------
#include <iostream>
#include <string>
#include <dir.h>
#include <process.h>
#include <windows.h> // we need this header for the 'gotoxy' function.
#include <conio.h> // we need this header for the 'getch' function.
#include <cstdlib>
#include <sys/stat.h>
//-----------------------------------------------------------------------------------------------
using namespace std;
//-----------------------------------------------------------------------------------------------
string * MenuItems(); // a function that returns the name of a menu item.

void gotoxy(int,int); // by this function you can goto any position on the cmd line screen.

void ChangeCursorStatus(bool);

void MenuFun1(); // every menu item needs a seperate function, so this is for the first item.

void MenuFun2(); //    and the second item etc...

void MenuFun3(); //if you want another way to implement the functionallity of a menu item plz
                 //    contact me at my email.
void MenuFun4();

void MenuFun5();

void ExitOption(); // this is also an item function but i named it like this coz every menu must
                   //    have an exit item.
//-----------------------------------------------------------------------------------------------
int main()
{
	ChangeCursorStatus(false);
	typedef void (*TMenuOption)(); // typedef for defining a 'pointer to function' type.

	int ItemCount=6; // This variable holds the number of menu items.
	int MenuChoice=2; // This variable holds the position of the cursor.
	char key; //for entering the key (up arrow,down arrow,etc...);

	TMenuOption *MenuOption=new TMenuOption[ItemCount];//array of pointers to functions (dynamic).
	MenuOption[0]=MenuFun1; //filling the array with the functions.
	MenuOption[1]=MenuFun2;
	MenuOption[2]=MenuFun3;
	MenuOption[3]=MenuFun4;
	MenuOption[4]=MenuFun5;
	MenuOption[5]=ExitOption;

	while(1) //infinite loop. (this loop will not break that's why we need an exit function).
	{
		for (int i=0;i<ItemCount;i++) // Draw the menu.
		{
			gotoxy(26,6+i);
			MenuChoice==i+1 ? cout<<" -> " : cout<<"    "; // if (i+1) == the cursor then
			                                               //    print ' -> ' else print '    '.
			                                               //    by the way i call '->' the cursor
			cout<<MenuItems()[i]<<endl; // print the name of the item.
		} // finish the drawing.

		key=getch(); //get the key.

		/*
		   getch() is like cin>>bla;
		   but the differance is that by 'cin' you can enter char,double,int,etc...
		   with more than one digit and the value you entered is printed on the screen

		   but with getch you can only enter ONE CHARACTER and will not be printed on
		   the sceen and return the entered key to the variable 'key' in this case.
		*/
		switch (key) //check the entered key.
		{
		case '\r': // if the entered key is 'Enter'.
			try
			{
				(*MenuOption[MenuChoice-1])(); // call the function of the index 'cursor-1' in
				                               //     the 'pointer to function' array.
			}
			catch(...)
			{}  // we have to use try and catch coz if we did'nt fill that index with a function.
				//                     a runtime error will appear.

			break;

		case 'P': // if the entered key is the 'up arrow' notice that its equal to 'P' (capital)
			MenuChoice++; //then we will increment the cursor by one.
			if (MenuChoice>ItemCount) // if the cursor value is more than the items count.
				MenuChoice=2;         //    then it will return back to the first item.
			break;

		case 'H': // same but with 'down arrow' and decrement the cursor.
			MenuChoice--;
			if (MenuChoice<2)
				MenuChoice=ItemCount;
			break;

		case 27: // 27 is the asscii to the escape key (Esc)
			try {(*MenuOption[ItemCount-1])();} // useually when the 'Esc' key is pressed the last
			                                    //     item will be called (executed). but you can
			                                    //     change it to whatever you want.
			catch(...){}
			break;
		default:// any another key.
			if (key>='1' && key <=char(ItemCount+'0'))//check if the pressed key is in the range
				                                      //    of (1,2,3,...,#of items) [all char(s)]
			{
				try {(*MenuOption[int(key)-'0'-1])();} //call the function of the pressed number.
				     //  you can make the cursor move to that item instead of calling (executing)
					 //  it by replacing all the code between 'if (bla){' and '}' with this
				     //  statement MenuChooice=int(key)-'0'
				catch(...){}
			}
		}
	}

	delete MenuOption;
	return 0;
}
//-----------------------------------------------------------------------------------------------

string * MenuItems() // this function returns a pointer to a string.
{
	string *item=new string[6];
	item[0]="MENU DIREKTORI";
	item[1]="Direktori C.";
	item[2]="Direktori E.";
	item[3]="Direktori F.";
	item[4]="Direktori P.";
	item[5]="KELUAR";

	return item;
}
//-----------------------------------------------------------------------------------------------
void gotoxy(int xpos, int ypos)  // just take this function as it is.
{
	COORD scrn;
	HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
	scrn.X = xpos; scrn.Y = ypos;
	SetConsoleCursorPosition(hOuput,scrn);
}

//-----------------------------------------------------------------------------------------------
void MenuFun1()
{
	getch(); // we can use getch like pause (whitout assigning the return value to a variable).
}
//-----------------------------------------------------------------------------------------------
void MenuFun2()
{
	system("cls"); //clear the screen.
	gotoxy(25,10);
	cout<<"Buka Direktori C"<<endl;
	system("dir c:");
	getch(); // we can use getch like pause (whitout assigning the return value to a variable).
	system("cls");
}
//-----------------------------------------------------------------------------------------------
void MenuFun3()
{
	system("cls");
	gotoxy(25,10);
	cout<<"Buka Direktori E"<<endl;
	system("dir e:");
	getch();
	system("cls");
}
//-----------------------------------------------------------------------------------------------
void MenuFun4()
{
	system("cls");
	gotoxy(25,10);
	cout<<"Buka Direktori F"<<endl;
	system("dir f:");
	getch();
	system("cls");
}

//-----------------------------------------------------------------------------------------------
void MenuFun5()
{
	system("cls");
	gotoxy(30,10);
	cout<<"Buka Direktori P"<<endl;
	system("dir p:");
	getch();
	system("cls");
}
//-----------------------------------------------------------------------------------------------
void ExitOption()
{
	gotoxy(35,15);
	cout<<"Keluar dari program..."<<endl;
	getch();
	exit(0);
}
//-----------------------------------------------------------------------------------------------
void ChangeCursorStatus(bool Visible)
{
	CONSOLE_CURSOR_INFO *c=new CONSOLE_CURSOR_INFO;
	HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);

	if (Visible)
	{
		c->bVisible=TRUE;
		c->dwSize=0;//(0) is invild so the default value is set
	}
	else
	{
		c->bVisible=FALSE;
		c->dwSize=1;//it must be assigned to a valid value
	}

	SetConsoleCursorInfo(h,c);
}
//-----------------------------------------------------------------------------------------------
