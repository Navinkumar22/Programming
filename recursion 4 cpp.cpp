/*
Problem
Write a recursive function called ReverseString() that takes a string as a parameter. Then it returns the string in reverse order.
*/

#include <iostream>
using namespace std;

string ReverseString(string x){
  if(x.length()==1){
    return x;
  }else{
    return ReverseString(x.substr(1,x.length()))+x[0];
  }
}

int main(int argc, char** argv) {
  cout << ReverseString(argv[1]) << endl;
  return 0;
}
