/*
Exercise 2
You are given the following code:
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
    
  private:
    string name;
    double diameter;
    double distance;
    int moons;
};

//add class definitions above this line   

int main() {
  
  //DO NOT EDIT the code below
  
  CelestialBody mercury("Mercury", 4879.4, 57909000, 0);
  CelestialBody venus("Venus", 12103.6, 108160000, 0);
  cout << mercury.CloserToSun(venus) << endl;

  //DO NOT EDIT the code above
  
  return 0;
  
}
Requirements
Using the same CelestialBody class, write a class function CloserToSun that compares two CelectialBody objects and returns the name of the object that is closer to the sun (smaller distance).
DO NOT EDIT the existing code in main or you will not pass the test:
CelestialBody mercury("Mercury", 4879.4, 57909000, 0);
CelestialBody venus("Venus", 12103.6, 108160000, 0);
cout << mercury.CloserToSun(venus) << endl;
Expected Output
If mercury is compared to venus using mercury.CloserToSun(venus), then the function will return:
Mercury
TRY IT
Mercury
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
    string CloserToSun(CelestialBody cb) {
      if (distance < cb.distance) {
        return name;
      }
      else {
        return cb.name;
      }
    }
    
  private:
    string name;
    double diameter;
    double distance;
    int moons;
};

//add class definitions above this line   

int main() {
  
  //DO NOT EDIT the code below
  
  CelestialBody mercury("Mercury", 4879.4, 57909000, 0);
  CelestialBody venus("Venus", 12103.6, 108160000, 0);
  cout << mercury.CloserToSun(venus) << endl;

  //DO NOT EDIT the code above
  
  return 0;
  
}