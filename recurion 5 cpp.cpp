/*
Problem
Write a recursive function called GetMax() that takes a vector of integers as a parameter. 
Then it returns the largest integer in the array.
*/



#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

//add function definitions below this line
int GetMax(const vector<int>&nums){
  if(nums.size()==0){
    return 0;
  }else{
    return max(nums[0],GetMax(vector<int>(nums.begin()+1,nums.end())));
  }
}


//add function definitions above this line

int main(int argc, char** argv) {
  vector<int> nums;
  for (int i = 1; i < argc; i++) {
    nums.push_back(stoi(argv[i]));
  }
  cout << GetMax(nums) << endl;
  return 0;
}
