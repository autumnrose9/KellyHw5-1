/**
* Autumn Kelly 
* This program copies the text of one file and writes into another
*/

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

#define FILE_PATH "/home/debian"

int main(int argc, char* argv[]){

	if(argc!=3){
		cout << endl;
		cout << "Usage is myCopierCCP, Filename to be read, and filename to be written to ";
		cout << "e.g. reading-file myTextFile.txt myTextFileOutput.txt" << endl;
		return 3;
	}

        string cmd_copy(argv[1]);
	string cmd_write(argv[2]);
	cout << endl;
	cout << "Starting the reading-file program" << endl;
	cout << "The current FILE path is: " << FILE_PATH << endl;
	cout << "File name to be read is: " << cmd_copy << endl;
	cout << "File name to be written is: " << cmd_write << endl;
	cout << endl;

	fstream fs;
	string line;

	string filename_copy = "/" + cmd_copy;
	string filename_write = "/" + cmd_write;
	cout << "The string filename to be copied is: " << filename_copy << endl;
	cout << "The string filename to be written is: " <<filename_write << endl;

	string pathname = FILE_PATH + filename_copy;
	string pathname_write = FILE_PATH + filename_write;
	cout << "The string pathName to be copied is: " << pathname << endl;
	cout << "The string pathName to be written is: " <<pathname_write << endl;
	cout << endl;

	fs.open((pathname).c_str(), std::fstream::in);
	string path(FILE_PATH);

	fstream fsw;
	fsw.open((path+"/"+cmd_write).c_str(), std::fstream::out);

	while(getline(fs,line))
	{
		fsw << line << endl;
		cout << line << endl;
	}
	fs.close();
	fsw.close();
}
