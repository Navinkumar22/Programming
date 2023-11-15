/*
Lab Challenge
Problem
Write a class named Person that has attributes string name, int age, and string occupation. These attributes should be private. Create getters and setters for each attribute following C++ conventions.
Given Code

Requirements
Declare the instance Person("Citra Curie", 16, "student")
The function GetName() returns Citra Curie
The function SetName("Rowan Faraday") changes the name attribute to “Rowan Faraday”
The function GetAge() returns 16
The function SetAge(18) changes the age attribute to 18
The function GetOccupation() returns student
The function SetOccupation("plumber") changes the occupation attribute to “plumber”
DO NOT EDIT the specified code in the main function or you may not receive credit for your work!
Expected Output
Citra Curie
16
student
Rowan Faraday
18
plumber  
*/

#include <iostream>
#include <vector>
using namespace std;

//add class definitions below this line
class Person{
  public:
    Person(string s,int n,string w){
      name=s;
      age=n;
      occupation=w;
    }
    void SetAge(int a){
      age=a;
    }
    void SetName(string n){
      name=n;
    }
    void SetOccupation(string o){
      occupation=o;
    }
    int GetAge(){
      return age;
    }
    string GetName(){
      return name; 
    }
    string GetOccupation(){
      return occupation;
    }
  private:
    string name;
    string occupation;
    int age;
};


//add class definitions above this line


int main() {
  
  //DO NOT EDIT CODE BELOW THIS LINE

  Person p("Citra Curie", 16, "student");
  cout << p.GetName() << endl;
  p.SetName("Rowan Faraday");
  cout << p.GetAge() << endl;
  p.SetAge(18);
  cout << p.GetOccupation() << endl;
  p.SetOccupation("plumber");
  cout << p.GetName() << endl;
  cout << p.GetAge() << endl;
  cout << p.GetOccupation() << endl;

  //DO NOT EDIT CODE ABOVE THIS LINE
  
  return 0;
  
}