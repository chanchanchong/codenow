#include <iostream>
using namespace std;

int main(){
	int n, counts = 0;
	cin >> n;
	while(n--){
		int ones = 0;
		for(int i = 0; i < 3; i++){
			
			int arr[3];
			cin >> arr[i];
			if(arr[i] == 1)
				ones++;
		}
		if(ones >= 2)
			counts++;
	}
	cout << counts;
}
