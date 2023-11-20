/*
Exercise 1
Use the VectorAddThree class to the left as the base class. Create the VectorAddSix class as a derived class of VectorAddThree. Override the Add function so that it returns a vector of six integers.
Given Code
Testing Your Code
The code below instantiates a VectorAddSix object. Then a loop is created to iterate through the object to add each element into the vector. Finally, the elements are printed. DO NOT EDIT this code!
  //DO NOT EDIT code below this line
   
  VectorAddSix v6;
  for (int i : v6.Add()) {
    cout << i << endl;
  }

  //DO NOT EDIT code above this line
Expected Output
1
2
3
4
5
6
*/
#include <iostream>
#include <vector>
using namespace std;

//DO NOT EDIT/////////////////
class VectorAddThree {      //
  public:                   //
    vector<int> Add() {     //
      nums.push_back(num1); //
      nums.push_back(num2); //
      nums.push_back(num3); //
      return nums;          //
    }                       //
                            //
  protected:                //
    int num1 = 1;           //
    int num2 = 2;           //
    int num3 = 3;           //
                            //
  private:                  //
    vector<int> nums;       //
};                          //
//////////////////////////////

//add class definitions below this line
class VectorAddSix : public VectorAddThree {
  public:
    vector<int> Add() {
      nums.push_back(num1);
      nums.push_back(num2);
      nums.push_back(num3);
      nums.push_back(num4);
      nums.push_back(num5);
      nums.push_back(num6);
      return nums;
    }
  
  protected:
    int num4 = 4;
    int num5 = 5;
    int num6 = 6;
  
  private:
    vector<int> nums;
};

//add class definitions above this line

int main() {
  
  //DO NOT EDIT code below this line
   
  VectorAddSix v6;
  for (int i : v6.Add()) {
    cout << i << endl;
  }

  //DO NOT EDIT code above this line
  
  return 0;
  
}