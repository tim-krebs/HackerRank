/*****************************************************************************************************************
Validate Subsequence

Given two non-emüpty arrays of integers, write a function that determines whether the second array is a subsequence of the first one. 

A subsequence of an array is a set of numbers that aren't necessarily adjacent in the array, but that are in the same order as they appear in the array. 
For instance, the numbers [1, 2, 3] for m a subsequence of the array [1, 2, 3, 4], and so do the numbers [2, 4]. 
Note that a signle number in an array and the array itself are both valid subsequence of the array 

Sample Input:
array = [5, 1, 22, 25, 6, -1, 8, 10]
sequence = [1, 6, -1, 10]

Sample Output:
true

*****************************************************************************************************************/
#include <iostream>
#include <vector>


using namespace std;

bool isValidSubsequence(vector<int> array, vector<int> sequence) {
  // Write your code here.
	int arr_Pos = 0;
	int seq_Pos = 0;
	
	while(arr_Pos < array.size() && seq_Pos < sequence.size()){
		if(array[arr_Pos] == sequence[seq_Pos]){
			seq_Pos++;
		}
		
		arr_Pos++;
	}
	if(seq_Pos < sequence.size()){
		return false;
	}else{
		return true;
	}
}