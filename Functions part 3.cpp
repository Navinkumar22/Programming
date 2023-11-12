/*
Functions Exercise 3
Write a function called FindTerm() that takes a string term and a string vector as parameters. If the term exists inside the vector, then a boolean value of true is returned. Else, the term does not exist and false is returned. Note that capitalization matters. For example, "cat"and "Cat" are not considered the same term.
Existing Code:
#include <iostream>
#include <vector>
using namespace std;

//add code below this line



//add code above this line

int main(int argc, char** argv) {
  string x = argv[1];
  vector<string> y;
  for (int i = 2; i < argc; i++) {
    y.push_back(argv[i]);
  }
  cout << boolalpha << FindTerm(x, y) << endl;
}
Requirements
You should not make any changes to the code that already exists. If you accidentally delete any existing code, you can copy and paste the entire program from above.
You can use any number of functions, loops, and/or conditionals to produce the desired output.

*/

#include <iostream>
#include <vector>
using namespace std;

//add code below this line
bool FindTerm(string x,vector<string>&y){
  for(string i:y){
    if(i==x){
      return true;
    }
  }
  return false;
}


//add code above this line

int main(int argc, char** argv) {
  string x = argv[1];
  vector<string> y;
  for (int i = 2; i < argc; i++) {
    y.push_back(argv[i]);
  }
  cout << boolalpha << FindTerm(x, y) << endl;
}