/*


Strings Exercise 1
Problem
Write a program that takes input from a user and prints the first character of the input and the last character with some context. For example, if baseball is the string, then the program will output b is the first character and l is the last character. If cat is the string, then c is the first character and t is the last character will be printed.
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string my_string = (argv[1]);
  
  //add code below this line



  //add code above this line
  
  return 0;
  
}
Compile and test your code with a few different values
COMPILE AND TEST WITH BASEBALL
Expected Output

COMPILE AND TEST WITH CAT
Expected Output

COMPILE AND TEST WITH 123!
Expected Output

Requirements
You should not make any changes to the code that already exists. If you accidentally delete any existing code, you can copy and paste the entire program from above.
You can use any number of string functions and conditionals to produce the desired output.
*/

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string my_string = (argv[1]);
  
  //add code below this line
  char first = my_string.at(0);
  char last = my_string.at(my_string.length()-1);

  cout << first << " is the first character and " << last << " is the last character" << endl;



  //add code above this line
  
  return 0;
  
}