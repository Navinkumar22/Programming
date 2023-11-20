/*
Exercise 2
Vehicle is an abstract class. Create the Airplane class as a derived class of Vehicle. Extend and override Airplane so that it has a constructor, a Distance function, and one attribute (double speed). The Distance function should return the distance traveled by the Airplane object. Distance is calculated by multiplying speed by time.
IMPORTANT: You are not allowed to use conditionals for this exercise.
Given Code
Testing Your Code
The code in main is used to test your class definitions. DO NOT EDIT this code!
  //DO NOT EDIT code below this line
  
  Airplane a(550.0);
  a.Distance(2);
  a.Distance(3.15);
  a.Distance(10.63);
  Airplane a2(228.5);
  a2.Distance(2);
  a2.Distance(3.15);
  a2.Distance(10.63);

  //DO NOT EDIT code above this line
Expected Output
1100
1732.5
5846.5
457
719.775
2428.96
*/
#include <iostream>
#include <vector>
using namespace std;

//DO NOT EDIT/////////////////////////////////
class Vehicle {                             //
  public:                                   //
    virtual void Distance(double time) = 0; //
};                                          //
//////////////////////////////////////////////

//add class definitions below this line

class Airplane:public Vehicle{
  public:
    Airplane(double di){
      dis=di;
    }
    void Distance(double speed){
      cout<<dis*speed<<endl;
    }
    private:
      double dis;
};

//add class definitions above this line

int main() {
  
  //DO NOT EDIT code below this line
  
  Airplane a(550.0);
  a.Distance(2);
  a.Distance(3.15);
  a.Distance(10.63);
  Airplane a2(228.5);
  a2.Distance(2);
  a2.Distance(3.15);
  a2.Distance(10.63);

  //DO NOT EDIT code above this line
  
  return 0;
  
}