/*****************************************************************************************************************
Sorted Squared Array

Write a function that takes a non-empty array of integers that are sorted in ascending order and returns a new array 
of the same length with the squares of the original integers also sorted in ascending order.

Sample Input:
array = [1, 2, 3, 5, 6, 8, 9]

Sample Output:
[1, 4, 9, 25, 36, 64, 81]

*****************************************************************************************************************/
#include <vector>
#include <algorithm>

using namespace std;

vector<int> sortedSquaredArray(vector<int> array) {
  // Write your code here.
	vector<int> squared;

	
	for(int i = 0; i < array.size(); i++){
		int y = array[i];
		squared.push_back(y*y);
	}
	sort(squared.begin(), squared.end());
	
  return squared;
}
