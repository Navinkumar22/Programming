/*
Print Backwards
You are writing a program that adds three string arguments into a vector called reverse.
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv) {
  
  vector<string> reverse(0);
  reverse.push_back(argv[1]);
  reverse.push_back(argv[2]);
  reverse.push_back(argv[3]);
  
  //add code below this line

  

  //add code above this line
  
  for (auto a : reverse) {
    cout << a << endl;
  }
  
  return 0;
  
}
Then you want to modify the string arguments so that they are printed in reverse order. For example, if the three string arguments are one, two, and three, then the program will print:
three
two
one
*/

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv) {
  
  vector<string> reverse(0);
  reverse.push_back(argv[1]);
  reverse.push_back(argv[2]);
  reverse.push_back(argv[3]);
  
  //add code below this line
	reverse.push_back(argv[3]);
	reverse.push_back(argv[2]);
	reverse.push_back(argv[1]);
	reverse.erase(reverse.begin());
	reverse.erase(reverse.begin());
	reverse.erase(reverse.begin());


  //add code above this line
  
  for (int i = reverse.size() - 1; i >= 0; i--) {
    cout << reverse[i] << endl;
  }
  
  return 0;
  
}