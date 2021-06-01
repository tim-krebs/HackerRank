/*****************************************************************************************************************
Two Number Sum

Write a function that takes a non empty array of distinct integers and an integer representing a target sum. 
If any to numbers in the input array sum up to the target sum, the function should return them in an array,
in any order. If no two numbers sum up to the target sum, the function should return an empty array.

Note that the target sum has to be obtained by summing two different integers in the array. You cant add a 
single integer to itself in order to obtain the target sum.

You can assume that there will be at most one pair of numbers summing up to the target sum. 

Sample input:
array = [3, 5, -4, 8, 11, 1, -1, 6]
targetSum = 10

*****************************************************************************************************************/

#include <vector>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

#include <vector>
#include <algorithm>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {
  // Write your code here.
	sort(array.begin(), array.end());
	
	int left = 0;
	int right = array.size() - 1;
	
	while(left < right){
		int currentSum = array[left] + array[right];
		if(currentSum == targetSum){
			return {array[left], array[right]};
		}
		else if(currentSum < targetSum){
			left++;
		}
		else if(currentSum > targetSum){
			right--;
		}
	}
  return {};
}

int main (){
    vector<int> array;
    
    string input;

    std::string nums;
    std::getline(std::cin,nums);

    std::stringstream stream(nums);
   

    for(int i = 0; i < array.size(); i++){
        cout << array[i];
    }

}
