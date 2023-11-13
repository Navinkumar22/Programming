/*
Exercise 3
You are given the following code:
#include <iostream>
using namespace std;

//add class definitions below this line

class Mass {
  public:
    Mass(double mg, double g, double kg) {
      milligrams = mg;
      grams = g;
      kilograms = kg;
    }
  
  private:
    double milligrams;
    double grams;
    double kilograms;
};

//add class definitions above this line   

int main() {
  
  //DO NOT EDIT the code below

  Mass m1(800, 17, 3);
  Mass m2(730, 38, 2);
  cout << m1.TotalWeight() << endl;
  cout << m2.TotalWeight() << endl;
  cout << m1.CompareWeight(m2) << endl;

  //DO NOT EDIT the code above
  
  return 0;
  
}

Requirements
Create a few class functions that do the following:
TotalWeight - returns a double of the combined milligrams, grams, and kilograms attribute.
CompareWeight - compares the TotalWeight of two Mass objects and returns a string of The first object is heavier. if the first object has more TotalWeight or The second object is heavier. if the second object has more TotalWeight. If both objects have the same TotalWeight, then The two objects weight the same. will be returned.
Note: All calculations are done in grams. Conversions will be needed! (e.g. 1000 grams = 1 kilogram and 1000 milligrams = 1 gram).
DO NOT EDIT the existing code in main or you will not pass the test:
Mass m1(800, 17, 3);
Mass m2(730, 38, 2);
cout << m1.TotalWeight() << endl;
cout << m2.TotalWeight() << endl;
cout << m1.CompareWeight(m2) << endl;
Expected Output
3017.8
2038.73
The first object is heavier.
*/

#include <iostream>
using namespace std;

//add class definitions below this line

class Mass {
  public:
    Mass(double mg, double g, double kg) {
      milligrams = mg;
      grams = g;
      kilograms = kg;
    }
    double TotalWeight() {
      return ((milligrams / 1000) + grams + (kilograms * 1000));
    }
    string CompareWeight(Mass m) {
      double mass1 = TotalWeight();
      double mass2 = m.TotalWeight();
      if (mass1 > mass2) {
        return "The first object is heavier.";
      }
      else if (mass2 > mass1) {
        return "The second object is heavier.";
      }
      else {
        return "The two objects weigh the same.";
      }
    }
  
  private:
    double milligrams;
    double grams;
    double kilograms;
};

//add class definitions above this line   

int main() {
  
  //DO NOT EDIT the code below

  Mass m1(800, 17, 3);
  Mass m2(730, 38, 2);
  cout << m1.TotalWeight() << endl;
  cout << m2.TotalWeight() << endl;
  cout << m1.CompareWeight(m2) << endl;

  //DO NOT EDIT the code above
  
  return 0;
  
}