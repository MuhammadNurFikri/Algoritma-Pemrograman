#include<iostream>
#include<sys/stat.h>
#include<sys/types.h>
using namespace std;

main()
{
	if(mkdir("pathname",0777)==-1)//creating a directory
	{
		cerr<<"Error :  "<<strerror(errno)<<endl;
		exit(1);
	}
	else
	{
		ofstream write ("pathname/file.txt");//writing to a file
		if (write.is_open())
		{
			write << "This is a line."<<endl;
			write << "This is another line."<<endl;
			write.close();
		}
		else
			cout << "Unable to open file";
	}

	string line;

	ifstream read ("pathname/file.txt");//reading a file
	if (read.is_open())
	{

		while (! read.eof() )
		{
			getline (read,line);
			cout<<line<<endl;
		}
		read.close();
	}
	else
		cout << "Unable to open file";
}
