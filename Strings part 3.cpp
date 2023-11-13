/*
Problem
Write a program that accepts input from the user and creates another string that contains either a u, l, or - for each character of the original string. Use u when the character is uppercase, and use l when the character is lowercase. If the character is neither uppercase nor lowercase, use -. Print the original string first, then print the modified string.
Here is what you have so far:
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string original = (argv[1]);
  string modified;
  char ch;
  
  //add code below this line



  //add code above this line
  
  return 0;
  
}
Examples
If the user inputs cat, then the output will be:
cat
lll
If the user inputs HouSE, then the output will be:
HouSE
ulluu
*/

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string original = (argv[1]);
  string modified,org;
  char ch;
  
  //add code below this line
  for(int i=0;i<original.length();i++){
    ch=original.at(i);
    org+=ch;
    if(islower(ch)){
      modified+='l';
    }else if(isupper(ch)){
      modified.push_back('u');
    }else{
      modified+='-';
    }
  }
  cout<<org<<endl;
  cout<<modified; 
  



  //add code above this line
  
  return 0;
  
}