#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums){
    int n = 0;
    int currentN = 0;
    for(vector<int>::iterator it = nums.begin(); it != nums.end(); ++it){
        if(*it == 1){
            n++;
            cout << "first 1" << "\n";
        }
        else{
            if(currentN == 0){
                currentN = n;
                n = 0;
            }
            else{//n is greater than currentN
                if(n > currentN){
                    currentN = n;
                    n = 0;
                }else{//n is less than currentN
                    n = 0;
                }
            }
        }
    }
    if(n > currentN)
        return n;
    else
        return currentN;
}

int main(){
    vector<int> nums {1,0,1,1,0,1};
    for(int n: nums){
        cout << n << "->";
    }
    cout << "\n";
    cout << findMaxConsecutiveOnes(nums);
}
