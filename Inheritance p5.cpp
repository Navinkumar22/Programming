/*
Exercise 5
Use the Person class to the left to help you solve this exercise. First, complete the derived classes CardHolder that inherits from Person so that it includes the following:
Getters and setters for account_number, balance, and credit_limit
Sale - function that takes a sale price (double) as a parameter and adds it to balance
Payment - function that takes an amount (double) and subtracts it from balance
Next, complete the PlatinumClient class that inherits from CardHolder. It should have the following:
Getters and setters for cash_back and rewards
Sale - overrides the Sale function in CardHolder by:
Taking price (double) as a parameter
Multiplies price by cash_back and add that value to rewards
Calls SetBalance so that balance is increased by price
Given Code
Requirements
Produce the expected output using concepts of inheritance.
DO NOT EDIT the specified code or you might not receive credit for your work!
Expected Output
0
2
200
150
Sarah lives at 101 Main Street.
*/

#include <iostream>
using namespace std;

//DO NOT EDIT code below this line

class Person {
  public:
    Person(string n, string a) {
      name = n;
      address = a;
    }
  
    string GetName() {
      return name;
    }

    void SetName(string new_name) {
      name = new_name;
    }

    string GetAddress() {
      return address;
    }

    void SetAddress(string new_address) {
      address = new_address;
    }

    string Info() {
      return name + " lives at " + address + ".\n";
    }
  
  private:
    string name;
    string address;
};

//DO NOT EDIT code above this line

//add class definitions below this line

//DO NOT EDIT/////////////////////////////////////////////////
class CardHolder : public Person {                          //
  public:                                                   //
    CardHolder(string n, string a, int an) : Person(n, a) { //
      account_number = an;                                  //
      balance = 0;                                          //
      credit_limit = 5000;                                  //
    }                                                       //
//////////////////////////////////////////////////////////////
  
    void Sale(double d){
      balance+=d;
    }
    void Payment(double p){
      balance-=p;
    }
    int b(){
      return balance;
    }
  private:
    int account_number,balance,credit_limit;
};
  
  
//DO NOT EDIT/////////////////////////////////////////////////////////////
class PlatinumClient : public CardHolder {                              //
  public:                                                               //
    PlatinumClient(string n, string a, int an) : CardHolder(n, a, an) { //
      cash_back = 0.02;                                                 //
      rewards = 0;                                                      //
    }                                                                   //
//////////////////////////////////////////////////////////////////////////
    int GetRewards(){
      return rewards;
    }
    int GetBalance(){
      return CardHolder::b();
    }
    void Sale(double p){
      rewards+=p*cash_back;
      CardHolder::Sale(p);
    }

  private:
    double cash_back,rewards;
};  
  
  
//add class definitions above this line

int main() {
  
  //DO NOT EDIT code below this line

  PlatinumClient pc("Sarah", "101 Main Street", 123364);
  pc.CardHolder::Sale(100);
  cout << pc.GetRewards() << endl;
  pc.Sale(100);
  cout << pc.GetRewards() << endl;
  cout << pc.GetBalance() << endl;
  pc.Payment(50);
  cout << pc.GetBalance() << endl;
  cout << pc.Info() << endl;

  //DO NOT EDIT code above this line
  
  return 0;
  
}