/*
Problem
Write a recursive function called BunnyEars() that takes the number of bunnies (an integer) as a parameter. 
Then it returns the number of bunny ears (2 per bunny). Use addition instead of multiplication in your code.
*/
#include <iostream>
using namespace std;

//add function definitions below this line
int BunnyEars(int a){
  if(a==0){
    return 0;
  }else{
    return 2+BunnyEars(a-1);
  }
}


//add function definitions above this line

int main(int argc, char** argv) {
  cout << BunnyEars(stoi(argv[1])) << endl;
  return 0;
}
