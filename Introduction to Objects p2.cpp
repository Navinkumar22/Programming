/*
Exercise 2
Define the class Cat. The class should have a constructor but without any parameters. The constructor will generate the following attributes.
breed - "American Shorthair"
color - "black"
name - "Kiwi"
Expected Result:
American Shorthair
black
Kiwi
DO NOT CHANGE the existing code in main.
Cat cat;
cout << cat.breed << endl;
cout << cat.color << endl;
cout << cat.name << endl;
Test your code with the TRY IT button below before submitting your work.
TRY IT
American Shorthair
black
Kiwi

*/
#include <iostream>
using namespace std;

//add class definitions below this line
class Cat{
  public: string breed,color,name;
  Cat(){
    breed ="American Shorthair";
    color ="black";
    name ="Kiwi";
  }
};

  
//add class definitions above this line

int main() {

  Cat cat;
  cout << cat.breed << endl;
  cout << cat.color << endl;
  cout << cat.name << endl;

  return 0;
  
}
