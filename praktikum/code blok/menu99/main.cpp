
#include <iostream>
#include <io.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <cstdlib>
#include <time.h>
#include <windows.h>
#include <fstream>
#include <string>
#include <tchar.h>
#include <windows.h>
#include <string>
#include "shlwapi.h"
#include <iomanip>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

using namespace std;
#define GAME "C://GAME//"
#define DATA "DATA//"
#define CHARAC GAME DATA "CHARAC//"
#define MNSTR GAME DATA "MNSTR//"
#define SAVE GAME DATA "SAVES//"
#define CON1 SAVE GAME DATA "CON1//"
#define cx "continue[1].txt"
#define SAVEFAIL1 "The Saved Game File Does Not Exist"
#define ESC 27
#define UP 72
#define LEFT  75
#define RIGHT 77
#define DOWN  80
#define ENTER 13
void continu();
void load();
void newgame();
void opti();
void clr();
void install()
{
CreateDirectory(GAME, NULL);//Creates UserFolder
CreateDirectory(SAVE, NULL);
CreateDirectory(MNSTR, NULL);
CreateDirectory(CHARAC, NULL);
CreateDirectory(CON1, NULL);
}
void foo(const char *prompt, string menuA = "null")
{
   puts(prompt);
   //for ( ;; )
   {
	  int ch = _getch();
	  switch(ch)
	  {
	  case EOF:
	  case ESC:   return;
	  case UP:	clr();  continu(); /*menuA = "con";*/ break;
	  case LEFT:  clr(); load();  /*menuA = "load";*/ break;
	  case RIGHT:  clr(); newgame(); /*menuA = "new";*/ break;
	  case DOWN:  clr(); opti(); /*menuA = "opti";*/ break;
	  //case ENTER: puts("ENTER"); system("pause"); clr(); break;
	  default:	if(isprint(ch)) putchar(ch); break;
	  }
	  /*if (menuA == "con")
	  {
continu();
   }
else if (menuA == "load")
   {
load();

   }
else if (menuA == "new")
   {

newgame();
   }
else if (menuA == "opti")
   {
opti();

   }
else
{

cout << "you suck.";
system("pause"); // Ugly
}*/
   }
}

int main(void)
{
	install();
   foo("\n\n\n\n\t\t\t\tContinue\n\n\t\tLoad Game\t\t\tNew Game\n\n\t\t\t\tOptions");
   return 0;
}
void clr()
 {
 HANDLE                     hStdOut;
 CONSOLE_SCREEN_BUFFER_INFO csbi;
 DWORD                      count;
 DWORD                      cellCount;
 COORD                      homeCoords = { 0, 0 };

 hStdOut = GetStdHandle( STD_OUTPUT_HANDLE );
 if (hStdOut == INVALID_HANDLE_VALUE) return;

 /* Get the number of cells in the current buffer */
 if (!GetConsoleScreenBufferInfo( hStdOut, &csbi )) return;
 cellCount = csbi.dwSize.X *csbi.dwSize.Y;

 /* Fill the entire buffer with spaces */
 if (!FillConsoleOutputCharacter(
   hStdOut,
   (TCHAR) ' ',
   cellCount,
   homeCoords,
   &count
   )) return;

 /* Fill the entire buffer with the current colors and attributes */
 if (!FillConsoleOutputAttribute(
   hStdOut,
   csbi.wAttributes,
   cellCount,
   homeCoords,
   &count
   )) return;

 /* Move the cursor home */
 SetConsoleCursorPosition( hStdOut, homeCoords );
 }
void continu()
{
	const WORD colors[] =
		{
		0x1A, 0x2B, 0x3C, 0x4D, 0x5E, 0x6F,//Note to self: Check what all these colors are...Aka what are all the color combos.
		0xA1, 0xB2, 0xC3, 0xD4, 0xE5, 0xF6
		};
	HANDLE hstdin  = GetStdHandle( STD_INPUT_HANDLE  );
	HANDLE hstdout = GetStdHandle( STD_OUTPUT_HANDLE );
	WORD   index   = 0;

	CONSOLE_SCREEN_BUFFER_INFO csbi;
	GetConsoleScreenBufferInfo( hstdout, &csbi );
	/*/ofstream myfilex ("C://GAME//CON//continue[1].txt");
  if (myfilex.is_open())
  {
    myfilex << "Michael Quick LVL 22 2011APR20";
    myfilex.close();
  }
  else cout << "Unable to open file";*/
//The following checks to see if folder CON1 exists []
string strPath = CON1;
if (_access( strPath.c_str(), 0 ) == 0 )
 {
     struct stat status;
     stat( strPath.c_str(), &status );
          if ( status.st_mode && S_IFDIR )
          {
SetConsoleTextAttribute( hstdout, 0x3E);
			  cout << "$" << endl ;

          }

          else
          {
			  SetConsoleTextAttribute( hstdout, 0x35);
			  cout << "$F" << endl;
			//sixteen = "false";
          }

 }

  else
   {
	   SetConsoleTextAttribute( hstdout, 0x35);
	   cout << "$0" << endl;
//sixteen = "false";
 }
//[]

	string contx;
	ifstream myfile (GAME cx);
  if (myfile.is_open())
  {
    while ( myfile.good() )
    {
      getline (myfile,contx);
      cout << "LOAD:" << contx << endl;
    }
    myfile.close();
  }
  else
  {
SetConsoleTextAttribute( hstdout, 0x35);
cout << SAVEFAIL1;
  }
FlushConsoleInputBuffer( hstdin );
		SetConsoleTextAttribute( hstdout, csbi.wAttributes ); //reset colors
}
void load()
{
	cout << "load";
}
void newgame()
{
cout << "newgame";
}

void opti()
{
cout << "options";
}
