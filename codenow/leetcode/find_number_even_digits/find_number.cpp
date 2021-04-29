#include <iostream>
#include<vector>
using namespace std;

class Solution{
    public:
        int count = 0;
        int i_even = 0;
        int findNumbers(vector<int>& nums){
            for(int i : nums){
                i_even = 0;
                while(i % 10 == 0){
                    i_even++;
                }
                if(i_even % 2 == 0)
                    count++;
            }
            return i_even;
        }
};


int main(){
    Solution s;
    vector<int> v {12};
   
    cout << s.findNumbers(v);
    
}