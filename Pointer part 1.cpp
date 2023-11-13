/*
Find the “Larger” Pointer
Given the current program within the text editor to your left:
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  int a = atoi((argv[1]));
  int b = atoi((argv[2]));
  int *p1 = &a;
  int *p2 = &b;
  
  //add code below this line



  //add code above this line
  
  return 0;
  
}

Complete the program so that the pointer that’s associated with the larger value is printed. For example, if a is larger than b, then the system will print *p1. Else if b is larger than a, then the system will print *p2. If neither is larger, then the system will print Neither number is larger. Your output should look like this:
The larger number is <?>
Where <?> represents the larger valued pointer. Or if neither is larger, then the output will be:
Neither number is larger
*/

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  int a = atoi((argv[1]));
  int b = atoi((argv[2]));
  int *p1 = &a;
  int *p2 = &b;
  
  //add code below this line
  if(*p1>*p2){
    cout<<"The larger number is "<<*p1;
  }else if(*p1<*p2){
    cout<<"The larger number is "<<*p2;
  }else{
    cout<<"Neither number is larger";
  }
  
  
  //add code above this line
  
  return 0;
  
}
