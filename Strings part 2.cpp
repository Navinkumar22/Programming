/*
Problem
Write a program that captures input from the user, prints the input string as many times as its length, and prints as many lines of it as the length of the input string.
Here is what you have so far:
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string my_string = (argv[1]);
  
  //add code below this line



  //add code above this line
  
  return 0;
  
}
Compile and test your code with a few different values
COMPILE AND TEST WITH CAT
Expected Output

COMPILE AND TEST WITH TREE
Expected Output

COMPILE AND TEST WITH !@#^&
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

  for(int i=0;i<my_string.length();i++){
    for(int j=0;j<my_string.length();j++){
      cout<<my_string;
    }
    cout<<endl;   
  }

  //add code above this line
  
  return 0;
  
}