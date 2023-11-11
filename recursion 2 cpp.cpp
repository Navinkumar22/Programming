/*
Problem
Write a recursive function called ListSum() that takes a vector of integers as a parameter. Then it returns the sum of all of the integers in the array.
*/



#include <iostream>
#include <vector>
using namespace std;

int ListSum(const vector<int>&nums){
  if(nums.size()==0){
    return 0;
  }else{
    return nums[0]+ListSum(vector<int>(nums.begin()+1,nums.end()));
  }
}



int main(int argc, char** argv) {
  vector<int> nums;
  for (int i = 1; i < argc; i++) {
    nums.push_back(stoi(argv[i]));
  }
  cout << ListSum(nums) << endl;
  return 0;
}
