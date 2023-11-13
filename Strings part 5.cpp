/*
Exercise 5
Problem
Write a program that captures input from the user and swaps the letters two at a time in the string. The first two characters change places, the third and fourth characters change places, etc. Assume that the program will only take an even number of characters, otherwise, there will be an error.
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string my_string = (argv[1]);
  
  //add code below this line



  //add code above this line
  
  return 0;
  
}
Compile and test your code with a few different values
COMPILE AND TEST WITH HOME
Expected Output

COMPILE AND TEST WITH OCIDGN
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
    char c=my_string.at(i); 
    my_string.at(i)=my_string.at(i+1);
    my_string.at(i+1)=c;
    i++;
  }
  cout<<my_string;


  //add code above this line
  
  return 0;
  
}