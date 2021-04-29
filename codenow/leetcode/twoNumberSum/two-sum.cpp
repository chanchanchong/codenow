#include <iostream>
#include <vector>
#include <unordered_set>
#include <map>
using namespace std;
//two number sum
//using O(n^2)
vector<int> twoSum(vector<int> arr, int targetSum){
	for(int i = 0; i < arr.size() - 1; i++){
		for(int j = i + 1; j < arr.size(); j++){
			if(arr[j] == targetSum - arr[i])
				return vector<int>{arr[i], arr[j]};
		}
	}
	return {};
}

//using algoexpert map hash
vector<int> twoNumsum(vector<int> arr, int targetSum){
	unordered_set<int> nums;
	for(int num : arr){
		int potentialMatch = targetSum - num;
		if(nums.find(potentialMatch) != nums.end())
			return vector<int>{potentialMatch, num};
		else
			nums.insert(num);
	}
	return {};
}

map<int,int> 


