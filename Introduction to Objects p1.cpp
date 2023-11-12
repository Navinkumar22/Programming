/*Exercise 1
Define the class PracticeClass. It should have only a single string attribute name. This class should not have a constructor.
Expected Result:
Class Object
DO NOT CHANGE the existing code in main.
PracticeClass obj;
obj.name = "Class Object";
cout << obj.name;
Test your code with the TRY IT button below before submitting your work.
TRY IT
Class Object*/

#include <iostream>
using namespace std;

class PracticeClass{
  public: string name;
};

int main() {
  
  PracticeClass obj;
  obj.name = "Class Object";
  cout << obj.name;
  
  return 0;
  
}
