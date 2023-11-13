/*
Exercise 1
The code below (also shown in the text editor to your left) creates the CelestialBody class as well as the external function ComparedToEarth.
#include <iostream>
using namespace std;

//add class definitions below this line

class CelestialBody {
  public:
    CelestialBody(string n, double diam, double dist, int m) {
      name = n;
      diameter = diam;
      distance = dist;
      moons = m;
    }
    
    string name;
    double diameter;
    double distance;
    int moons;
};

//add class definitions above this line   

double ComparedToEarth(CelestialBody planet) {
  double earth = 12756.3;
  double relative_size = planet.diameter / earth;
  return relative_size;
}

int main() {
  
  CelestialBody planet("Jupiter", 142984, 778360000, 79);
  
  //Modify the code below
  
  cout << ComparedToEarth(planet) << endl;

  //Modify the code above

  return 0;
  
}
TRY IT
11.2089
Requirements
Your task is to:
Transform the ComparedToEarth function so that it becomes a class function of the CelestialBody class but still maintains the same functionalities as when it was an external function. In particular, it returns how much larger or smaller the specified CelestialBody object is compared to Earth.
Include the private access modifier where appropriate.
YOU MUST MODIFY the code to include these commands in main or you will not pass the test:
CelestialBody planet("Jupiter", 142984, 778360000, 79);
  
//Modify the code below
  
cout << planet.ComparedToEarth() << endl;

//Modify the code above
Expected Output
11.2089
*/

#include <iostream>
using namespace std;

//add class definitions below this line

class CelestialBody {
  public:
    CelestialBody(string n, double diam, double dist, int m) {
      name = n;
      diameter = diam;
      distance = dist;
      moons = m;
    }
    double ComparedToEarth() {
      double earth = 12756.3;
      double relative_size = diameter / earth;
      return relative_size;
    }
    
  private:
    string name;
    double diameter;
    double distance;
    int moons;
};

//add class definitions above this line   

int main() {
  
  CelestialBody planet("Jupiter", 142984, 778360000, 79);
  
  //Modify the code below
  
  cout << planet.ComparedToEarth() << endl;

  //Modify the code above
  
  return 0;
  
}