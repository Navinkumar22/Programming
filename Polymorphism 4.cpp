/*
Exercise 4
Create the Median class that has the function CalculateMedian that calculates the median of the integers passed to the function. Use function overloading so that this function can accept anywhere from two to five integer parameters.
How to calculate median

How to sort a vector of integers

Given Code
Testing Your Code
The code in main is used to test your class definitions. DO NOT EDIT this code!
  //DO NOT EDIT code below this line
   
  Median m;
  cout << m.CalculateMedian(3, 5, 1, 4, 2) << endl;
  cout << m.CalculateMedian(8, 6, 4, 2) << endl;
  cout << m.CalculateMedian(9, 3, 7) << endl;
  cout << m.CalculateMedian(5, 2) << endl;
  Median m2;
  cout << m2.CalculateMedian(24, 22, 21, 23, 20) << endl;
  cout << m2.CalculateMedian(12, 18, 9, 3) << endl;
  cout << m2.CalculateMedian(0, 1, 0) << endl;
  cout << m2.CalculateMedian(5, 3) << endl;

  //DO NOT EDIT code above this line
Expected Output
IMPORTANT: You will need to cast the return values using (double) in order for certain doubles to print properly. Otherwise, the system will print the return values as integers which will eliminate the decimal digits. For example (5 + 2) / 2 will produce 3 while (double) (5 + 2) / 2 will produce 3.5.
3
5
7
3.5
22
10.5
0
4
*/
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class Median {
  public:
    double CalculateMedian(int n1, int n2) {
      return (double) (n1 + n2) / 2;
    }
  
    double CalculateMedian(int n1, int n2, int n3) {
      vector<int> nums = {n1, n2, n3};
      sort(nums.begin(), nums.end());
      return nums.at(1);
    }

    double CalculateMedian(int n1, int n2, int n3, int n4) {
      vector<int> nums = {n1, n2, n3, n4};
      sort(nums.begin(), nums.end());
      return (double) (nums.at(1) + nums.at(2)) / 2;
    }

    double CalculateMedian(int n1, int n2, int n3, int n4, int n5) {
      vector<int> nums = {n1, n2, n3, n4, n5};
      sort(nums.begin(), nums.end());
      return nums.at(2);
    }
};


int main() {
  
  //DO NOT EDIT code below this line
   
  Median m;
  cout << m.CalculateMedian(3, 5, 1, 4, 2) << endl;
  cout << m.CalculateMedian(8, 6, 4, 2) << endl;
  cout << m.CalculateMedian(9, 3, 7) << endl;
  cout << m.CalculateMedian(5, 2) << endl;
  Median m2;
  cout << m2.CalculateMedian(24, 22, 21, 23, 20) << endl;
  cout << m2.CalculateMedian(12, 18, 9, 3) << endl;
  cout << m2.CalculateMedian(0, 1, 0) << endl;
  cout << m2.CalculateMedian(5, 3) << endl;

  //DO NOT EDIT code above this line
  
  return 0;
  
}
