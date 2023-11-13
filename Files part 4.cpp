/*
Files Exercise 4
Problem
Write a program that reads a tab ('\t') delimited CSV file and prints the name of the oldest person in the file. Assume that there are no two people with the same age.
Expected Output
The CSV file looks like the one below.
Peter   38  Doctor
Paul    41  Lawyer
Mary    32  Systems Engineer
You may add additional helper functions if you’d like, but your program must include the following line of code:
string path = argv[1];
The variable path allows for different text files to be sent to your program for testing. The TRY IT button below will send a test file to your program. You should see the following output:
The oldest person is Paul.
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
	vector<string> data;

	try {
	  ifstream file;
	  string read;
	  file.open(path);
	  if (!file) {
	    throw runtime_error("File failed to open.");
	  }
	  while (getline(file, read)) {
	    stringstream ss(read);
	    while (getline(ss, read, '\t')) {
	      data.push_back(read);
	    }
	  }
	  file.close();
	}
	  
	catch (exception& e) {
	  cerr << e.what() << endl;
	}
	  
	int max = 0;
	string person;
	  
	for (int i = 1; i < data.size(); i+=3) {
	  if (stoi(data.at(i)) > max) {
	    max = stoi(data.at(i));
	    person = data.at(i - 1);
	  }
	}
	cout << "The oldest person is " << person << ".";




  //add code above this line
  
  return 0;
  
}
