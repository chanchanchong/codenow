#include <iostream>
using namespace std;
void fizzBuzz(int& n) {
    for(int i = 1; i <= n; i++){
        if(i % 3 == 0 && i % 5 == 0){
            cout << "FizzBuzz" << "\n";
        }
        else if(i % 3 == 0){
            cout << "Fizz" << "\n";
        } 
        else if(i % 5 == 0){
            cout << "Buzz" << "\n";
        }
        else{
            cout << i << "\n";  
        } 
    }
}

int main(){
    int n;
    cin >> n;
    fizzBuzz(n);
}