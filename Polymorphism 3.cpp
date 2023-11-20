/*
Exercise 3
The Temperature class is an abstract class with two abstract functions. Create the Conversion class which inherits from Temperature. Use the formulas below to help with the temperature conversions.
Convert Fahrenheit to Celsius
°C=°F−321.8
 
Convert Celsius to Fahrenheit
°F=°C∗1.8+32
 
Given Code
Testing Your Code
The code in main is used to test your class definitions. DO NOT EDIT this code!
  //DO NOT EDIT code below this line
   
  Conversion c;
  cout << c.ConvertTo('c', 212.0) << endl;
  cout << c.ConvertTo('C', 78.0) << endl;
  cout << c.ConvertTo('h', 23.0) << endl;
  cout << c.ConvertTo('F', 0.0) << endl;
  cout << c.ConvertTo('f', 29.0) <<endl;
  cout << c.ConvertTo('3', 112.0) << endl;

  //DO NOT EDIT code above this line
Calling the ConvertTo function with the specified arguments should produce the return values shown below. Note, capitalization for the char argument should not affect the output. An invalid char argument will result in a return value of -0.0001.
Expected Output
100
25.5556
-0.0001
32
84.2
-0.0001
*/


#include <iostream>
#include <vector>
using namespace std;

//DO NOT EDIT/////////////////////////////////////
class Temperature {                             //
  public:                                       //
    virtual double Celsius(double temp) = 0;    //
    virtual double Fahrenheit(double temp) = 0; //
};                                              //
//////////////////////////////////////////////////

//add class definitions below this line
class Conversion:public Temperature{
  public:
    
    double ConvertTo(char c,double d){
     
      if(tolower(c)=='f'){
        return Fahrenheit(d);
      }else if(tolower(c)=='c'){
        return Celsius(d);
      }else{
        return -0.0001;
      }
    }double Fahrenheit(double d){
      return (d*1.8)+32;
    }
    double Celsius(double d){
      return (d-32)/1.8;
    }


};


//add class definitions above this line


int main() {
  
  //DO NOT EDIT code below this line
   
  Conversion c;
  cout << c.ConvertTo('c', 212.0) << endl;
  cout << c.ConvertTo('C', 78.0) << endl;
  cout << c.ConvertTo('h', 23.0) << endl;
  cout << c.ConvertTo('F', 0.0) << endl;
  cout << c.ConvertTo('f', 29.0) <<endl;
  cout << c.ConvertTo('3', 112.0) << endl;

  //DO NOT EDIT code above this line
  
  return 0;
  
}