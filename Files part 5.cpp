/*
Files Exercise 5
Problem
Write a program that reads a comma delimited CSV file and prints all of the cities which reside in the Southern Hemisphere. Note, any latitude with a negative value is south of the equator.
Expected Output
The CSV file looks like the one below.
City,Country,Latitude,Longitude
Beijing,China,39,116
Perth,Australia,-57,115
Port Moresby,Papua New Guinea,-25,147
Tokyo,Japan,35,139
You may add additional helper functions if you’d like, but your program must include the following line of code:
string path = argv[1];
The variable path allows for different text files to be sent to your program for testing. The TRY IT button below will send a test file to your program. You should see the following output:
The following cities are in the Southern Hemisphere: Perth, Port Moresby.
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
      while (getline(ss, read, ',')) {
        data.push_back(read);
      }
    }
    file.close();
  }
    
  catch (exception& e) {
    cerr << e.what() << endl;
  }
    
  string cities;
  cout << "The following cities are in the Southern Hemisphere: ";
    
  for (int i = 6; i < data.size(); i+=4) {
    if (stoi(data.at(i)) < 0) {
      cities += (data.at(i - 2) + ", ");
    }
  }
    
  cities.pop_back();
  cities.pop_back();
  cities += ".";
    
  cout << cities;



  //add code above this line
  
  return 0;
  
}
