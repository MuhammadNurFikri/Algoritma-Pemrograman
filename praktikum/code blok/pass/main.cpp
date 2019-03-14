#include<iostream>
#include<fstream>
#include<conio.h>
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <winable.h>
#include <cmath>
#include<string>
using namespace std;


void Auth(); //prompt to enter password
void Members(); //where you place your program, to be accessed after successful password
void Userchange(); //disabled
void Passchange(); //unused
void First(); //prompt to enter a password if there isn't one on record (i.e first time opening program)
void menu(); //currently unused
void Select(); //selection menu to access pass change or program etc.
void encrypt(string &e); //encrypt function
void decrypt (string &e); //decrypt function
string inpass;
string user;
string pass;
string first;
string firstconf;
int num = 0;
string com;
char c=' ';

main()
{
      system("cls");
      while(num==0)
      {
      system("cls");
      ifstream Passfile("password.txt", ios::in);
      Passfile>>inpass;
      if (inpass == ""){
      Passfile.close();
      cout<<"It appears that this is your first time opening this program\nplease enter a password: ";
      First();
      }
      else{
      Auth();
}}}
void Auth()
{
     ifstream Passfile("password.txt", ios::in);
     Passfile>>inpass;
     decrypt ( inpass );
     system("cls");
     cout<<"PASSWORD: ";

         do   //Loop until 'Enter' is pressed
         {

         c = getch();
         switch(c)
            {
            case 0: //Catches f1-f12
               {
               getch();
               break;
               }
               case 0xE0: //Catches arrow keys, end, home, page up/down, etc.
                    {
                         getch();
                          break;
                          }
            case '\b':
               {
               if(pass.size() != 0)  //If the password string contains data, erase last character
                  {
                  cout << "\b \b";
                  pass.erase(pass.size() - 1, 1);
                  }
               break;
               }

            default:
            {
               if(isalnum(c) || ispunct(c))
                  {

                  pass += c;
                  cout << "*";
                  }

               break;
               }
            };
         }


      while(c != '\r');

   cout<<"\n";
     Passfile.close();
     if(pass==inpass)
     {
                     Select();
                     }
     else
     {
         cout<<"Wrong Password, please try again.";
         Sleep(500);
         main();
         }
}
  void First()
  {
       string first;
       string firstconf;
do   //Loop until 'Enter' is pressed
/*3 NUL
15 Shift Tab
16-25 Alt-Q/W/E/R/T/Y/U/I/O/P
30-38 Alt-A/S/D/F/G/H/I/J/K/L
44-50 Alt-Z/X/C/V/B/N/M
59-68 F1-F10 (disabled as softkeys)
71 Home
72 Up Arrow
73 PgUp
75 Left Arrow
77 Right Arrow
79 End
80 Down Arrow
81 PgDn
82 Ins
83 Del
84-93 F11-F20 (Shift-F1 to Shift-F10)
94-103 F21-F30 (Ctrl-F1 to Ctrl-F10)
104-113 F31-F40 (Alt-F1 to Alt-F10)
114 Ctrl-PrtScr
115 Ctrl-Left Arrow
116 Ctrl-Right Arrow
117 Ctrl-End
118 Ctrl-PgDn
119 Ctrl-Home
120-131 Alt-1/2/3/4/5/6/7/8/9/0/-/=
132 Ctrl-PgUp
133 F11
134 F12
135 Shift-F11
136 Shift-F12
137 Ctrl-F11
138 Ctrl-F12
139 Alt-F11
140 Alt-F12
*/
         {
         c = getch();
         switch(c)
         {
            case 0: //Catches f1-f12
               {
               getch();
               break;
               }
               case 0xE0: //Catches arrow keys, end, home, page up/down, etc.
                    {
                         getch();
                          break;
                    }
            case '\b':
               {
               if(first.size() != 0)  //If the password string contains data, erase last character
                  {
                  cout << "\b \b";
                  first.erase(first.size() - 1, 1);
                  }
               break;
               }
            default:
               {
               if(isalnum(c) || ispunct(c))
                  {
                  first += c;
                  cout << "*";
                  }

               break;
               }
            };
         }
      while(c != '\r');
       cout<<"\n";
      system("cls");
      cout<<"Confirm Password: ";
     do   //Loop until 'Enter' is pressed
         {
         c = getch();
         switch(c)
            {
            case 0: //Catches f1-f12
               {
               getch();
               break;
               }
               case 0xE0: //Catches arrow keys, end, home, page up/down, etc.
                    {
                         getch();
                          break;
                          }
            case '\b':
               {
               if(firstconf.size() != 0)  //If the password string contains data, erase last character
                  {
                  cout << "\b \b";
                  firstconf.erase(firstconf.size() - 1, 1);
                  }
               break;
               }
            default:
               {
               if(isalnum(c) || ispunct(c))
                  {
                  firstconf += c;
                  cout << "*";
                  }
               break;
               }
            };
         }
      while(c != '\r');
   cout<<"\n";
     if (first.compare(firstconf) != 0){
       cout<<"Passwords do not match, please try again";
      Sleep(1000);
      system("cls");


      First();
}
    else if(first.compare(firstconf) == 0) {
      ofstream Passfile("password.txt", ios::out);
      encrypt( first );
      Passfile<<first;
      Passfile.close();
      cout<<"Password successfully registered! You may now access the program";
      Sleep (1000);
      system ("cls");
      main();
      }
      }
void Members()
{

menu();
}
void menu(){
string str;
string x;
system ("cls");
cout <<"1. Write to a file\n";
cout<<"2. Read what you've written\n";
getline(cin, x);
if (x=="1"){
system("cls");
  fstream myfile("example.txt", ios::out|ios::app);
  myfile <<"\n";
  getline (cin, str);
  myfile << str;
  myfile.close();
  menu();
}
if (x=="2"){
            system("cls");
  string line;
  ifstream myfile ("example.txt");
  if (myfile.is_open())
  {
    while ( myfile.good() )
    {
      getline (myfile,line);
      cout <<line << endl;
    }
    myfile.close();
  getch();
  menu();
  }

  else{ cout << "Unable to open file";
}
}
menu();
}

//encrypt data
void encrypt (string &e)
{
  const char* tempCharArray = e.c_str();
  for( int i=0; i<e.size(); ++i )
    e[i] = tempCharArray[i]+75;


} // encrypt

//decrypt data
void decrypt (string &e)
{
  const char* tempCharArray = e.c_str();
  for( int i=0; i<e.size(); ++i )
    e[i] = tempCharArray[i]-75;

} // decrypt

void Select(){
     system("cls");
            cout<<"Congratulations! You've either hacked in or cheated :P, please tell me how you\ndid it at http://www.cplusplus.com/forum/beginner/76573/(the link you should've gotten this from)\n";

getch();

      }
