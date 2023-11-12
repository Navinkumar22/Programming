/*

Array to Vector
You want to convert the oceans array into a vector. Here is what you have so far in the text editor to your left:
#include <iostream>
#include <vector>
using namespace std;

int main() {
  
  vector<string> oceans(0);
  
  //add code below this line



  //add code above this line
  
  for (auto a : oceans) {
    cout << a << endl;
  }
  
  return 0;
  
}
Complete the program so that when printing oceans, you get the output:
Pacific
Atlantic
Indian
Arctic
Southern
TRY IT
Requirements
You cannot make any changes to the code that already exists. If you accidentally delete any existing code, you can copy and paste the entire program from above.
You must include at least ONE push_back() function, at least ONE pop_back() function, and at least ONE at() function in your program.

*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
  
  vector<string> oceans(0);
  
  //add code below this line
  oceans.push_back("Pacific");
  oceans.push_back("Atlantic");
  oceans.push_back("Indian");
  oceans.push_back("Arctic");
  oceans.push_back("Southern");
  
  oceans.pop_back(); // Remove the last element ("Southern")
  oceans.push_back("Southern");
  oceans.at(0) = "Pacific"; 


  //add code above this line
  
  for (auto a : oceans) {
    cout << a << endl;
  }
  
  return 0;
  
}