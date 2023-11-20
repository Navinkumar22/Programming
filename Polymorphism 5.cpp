/*Exercise 5
Create a Substitute class which is a derived class of the base class Words. Substitute has just one attribute called input_string and a function called SubstituteChar which takes in a string and replaces every fifth character with the string HELLO.
For example:
If the word is Morning, then the function will return MornHELLOng.
If the word is Teddy, then the function will return TeddHELLO.
If the word has fewer than 5 characters, then a message Not enough characters will be returned.
Given Code
Testing Your Code
The code in main is used to test your class definitions. DO NOT EDIT this code!
  //DO NOT EDIT code below this line
  
  Substitute s1("dog");
  cout << s1.SubstituteChar() << endl;
  Substitute s2("string");
  cout << s2.SubstituteChar() << endl;
  Words w("string");
  cout << w.SubstituteChar() << endl;
  
  //DO NOT EDIT code above this line
Expected Result
Not enough characters
striHELLOg
stHELLOing
*/
#include <iostream>
#include <vector>
using namespace std;

//DO NOT EDIT///////////////////////////////////////////
class Words {                                         //
  public:                                             //
    Words(string s1) {                                //
      original = s1;                                  //
    }                                                 //
                                                      //
    string SubstituteChar() {                         //
      string sub;                                     //
      if (original.length() < 3) {                    //
        return "Not enough characters";               //
      }                                               //
      else {                                          //
        for (int i = 0; i < original.length(); i++) { //
          if (i == 2) {                               //
            sub += "HELLO";                           //
          }                                           //
          else {                                      //
            sub += original.at(i);                    //
          }                                           //
        }                                             //
      }                                               //
      return sub;                                     //
    }                                                 //
                                                      //
  private:                                            //
    string original;                                  //
};                                                    //
////////////////////////////////////////////////////////
class Substitute : public Words {
  public:
    Substitute(string s2) : Words(s2) {
      input_string = s2;
    }
  
    string SubstituteChar() {
      string sub;
      if (input_string.length() < 5) {
        return "Not enough characters";
      }
      else {
        for (int i = 0; i < input_string.length(); i++) {
          if (i == 4) {
            sub += "HELLO";
          }
          else {
            sub += input_string.at(i);
          }
        }
      }
      return sub;
    }
  
  private:
    string input_string;
};


int main() {
  
  //DO NOT EDIT code below this line
  
  Substitute s1("dog");
  cout << s1.SubstituteChar() << endl;
  Substitute s2("string");
  cout << s2.SubstituteChar() << endl;
  Words w("string");
  cout << w.SubstituteChar() << endl;
  
  //DO NOT EDIT code above this line
  
  return 0;
  
}