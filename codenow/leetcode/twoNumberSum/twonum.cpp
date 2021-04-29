#include <iostream>
#include <vector>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum){
	for(int i = 0; i < array.size() - 1; i++){
		int firstNum = array[i];
		for(int j = i + 1; j < array.size(); j++){
			int secondNum = array[j];
			if(firstNum + secondNum == targetSum)
				return vector<int>{firstNum, secondNum};
		}
	}
	return {};
}

int main(){
	vector<int> array;
	array.push_back(-4);
	array.push_back(-1);
	array.push_back(1);
	array.push_back(3);
	array.push_back(5);
	array.push_back(6);
	array.push_back(8);
	array.push_back(11);
	for(vector<int>::iterator it = array.begin(); it != array.end(); ++it)
		cout << *it << "-->";
	int targetSum = 10;
	vector<int> newV = twoNumberSum(array, targetSum);
	for(vector<int>::iterator it = newV.begin(); it != newV.end(); ++it)
		cout << *it << "-->";
}

