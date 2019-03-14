#include <iostream>
#include <string>
using namespace std;

#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>

int main()
{
  // This is not the preferred method, but it will work.
  // (You should preferably use the SHGetFolderPath() function instead.)
  string mydocuments = string( getenv("HOMEDRIVE") ) + getenv("HOMEPATH" ) + "\\Documents";

  // This is where the filename your user selects will go.
  // Make sure it is long enough. (Especially if you start playing with the OFN_ALLOWMULTISELECT flag.)
  string filename( MAX_PATH, '\0' );

  // This structure tells Windows how you want the Open File Dialog to appear.
  OPENFILENAME ofn;
  ZeroMemory( &ofn, sizeof( OPENFILENAME ) );
  ofn.lStructSize = sizeof( OPENFILENAME );

  // We'll add filters for text files (*.txt) and any file (*.*).
  // If you don't want any filters, just comment out this line (== set it to NULL).
  ofn.lpstrFilter = "Text Files\0*.TXT\0Any file\0*.*\0";

  // Where to put the filename the user selects
  ofn.lpstrFile = (char*)filename.c_str();
  ofn.nMaxFile  = filename.size();

  // Folder to start in
  ofn.lpstrInitialDir = mydocuments.c_str();

  // Title of the dialog
  ofn.lpstrTitle = "Demo -- Choose any file -- nothing will happen.";

  // There are many more options, but right now we just want the user to
  // select a file that actually exists.
  ofn.Flags = OFN_FILEMUSTEXIST | OFN_PATHMUSTEXIST;

  // Show the dialog!
  if (GetOpenFileName( &ofn ))
  {
    // Success! Yaaaay!
    filename.resize( filename.find( '\0' ) );
    cout << "You chose the file: " << filename << "\n";
  }
  else
  {
    // Bummer. Failure, dude.
    cout << "You chose to cancel the file operation.\n";
  }
}
