/*
Files Exercise 3
Problem
Write a program that reads a text file and prints the contents in reverse order.
Expected Output
You may add additional helper functions if you’d like, but your program must include the following line of code:
string path = argv[1];
The variable path allows for different text files to be sent to your program for testing. The TRY IT button below will send a test file to your program. You should see the following output:
The child still struggled and loaded me with epithets which carried despair to my heart; I grasped his throat to silence him, and in a moment he lay dead at my feet.
‘Frankenstein! you belong then to my enemy—to him towards whom I have sworn eternal revenge; you shall be my first victim.’
‘Hideous monster! Let me go. My papa is a syndic—he is M. Frankenstein—he will punish you. You dare not keep me.’
‘Boy, you will never see your father again; you must come with me.’
He struggled violently. ‘Let me go,’ he cried; ‘monster! Ugly wretch! You wish to eat me and tear me to pieces. You are an ogre. Let me go, or I will tell my papa.’
Note that there are newlines at the end of a few sentences!

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
    file.open(path);
    if (!file) {
      throw runtime_error("File not opened");
    }

    string line;
    string reversedContent = "";

    while (getline(file, line)) {
      reversedContent = line + "\n" + reversedContent;
    }

    cout << reversedContent;
    } catch (exception& e) {
        cerr << "Error: " << e.what() << endl;
    }



  //add code above this line
  
  return 0;
  
}
