/*
Find the Average
You are working to create a program that continuously takes in double and integer inputs and adds them to a vector called numList. If an input is not a double or an integer type, then the program will iterate through numList, add each value to the total, and calculate the average (avg). Finally, the average is printed with a newline. Here is what you have so far:
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv) {
  
  double input;
  double total = 0;
  double avg = 0;
  vector<double> numList(0);
  
  cout << "Enter double or int to add to total, else find total average:" << endl;
  while (cin >> input) {
  
    // add input into vector
    
    
    
    // your code goes above
  
    cout << "Enter double or int to add to total, else find total average:" << endl;
  }
  
  // iterate through vector, add elements to total, then calculate average
  
  
  
  // your code goes above
  
  cout << avg << endl;
  
  return 0;
  
}
Follow the comments within the code to complete the program. When running your code, you should be able to continuously enter doubles and integers into the Terminal. If you enter a non-double or non-integer, the program should stop and print the average. If no doubles or integers are entered, then the program will print 0.
Click to compile and run your code
TRY IT
Sample Outputs:
Sample 1
Enter double or int to add to total, else find total average:
1
Enter double or int to add to total, else find total average:
2
Enter double or int to add to total, else find total average:
3
Enter double or int to add to total, else find total average:
x
2
Sample 2
Enter double or int to add to total, else find total average:
I am entering a non-integer
0
Sample 3
Enter double or int to add to total, else find total average:
-14.5
Enter double or int to add to total, else find total average:
14.5
Enter double or int to add to total, else find total average:
-14
Enter double or int to add to total, else find total average:
14
Enter double or int to add to total, else find total average:
-5.5
Enter double or int to add to total, else find total average:
?
-1.1
*/

#include <iostream>
#include <vector>
#include <typeinfo>
using namespace std;

int main(int argc, char** argv) {
  
  double input;
  double total = 0;
  double avg = 0;
  vector<double> numList;
  
  cout << "Enter double or int to add to total, else find total average:" << endl;
  while (cin >> input) {
    if (typeid(input) == typeid(int) || typeid(input) == typeid(double)) {
      // Add input into vector
      numList.push_back(input);
    } else {
      break; // Exit the loop if input is not int or double
    }
    
    cout << "Enter double or int to add to total, else find total average:" << endl;
  }
  
  // Iterate through the vector, add elements to the total
  for (double num : numList) {
    total += num;
  }
  
  // Calculate the average
  if (numList.size() > 0) {
    avg = total / numList.size();
  }
  
  cout << avg << endl;
  
  return 0;
}
