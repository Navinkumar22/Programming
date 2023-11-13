/*
Files Exercise 1
Problem
Write a program that reads a text file and returns the number of lines as well as the total number of characters in the file.
Expected Output
You may add additional helper functions if you’d like, but your program must include the following line of code:
string path = argv[1];
The variable path allows for different text files to be sent to your program for testing. The TRY IT button below will send a test file to your program. You should see the following output:
4 line(s)
228 character(s)

*/

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

////////// DO NOT EDIT! //////////
  string path = argv[1];        //
//////////////////////////////////  
  
  //add code below this line
  try {
  ifstream file;
  string read;
  int lines = 0;
  int chars = 0;
  file.open(path);
  if (!file) {
    throw runtime_error("File failed to open.");
  }
  while (getline(file, read)) {
    lines++;
    chars += read.length();
  }
  file.close();
  cout << lines << " line(s)" << endl;
  cout << chars << " character(s)"; 
  }
	  
	catch (exception& e) {
	  cerr << e.what() << endl;
	}


  
  //add code above this line
  
  return 0;
  
}