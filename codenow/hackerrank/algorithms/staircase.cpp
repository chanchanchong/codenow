#include <bits/stdc++.h>
using namespace std;

void staircase(int n){
    for(int i = 0; i < n; i++){
        //space
        for(int j = i + 1; j < n; j++){
            cout << " ";
        }
        for(int j = i; j >= 0; j--){
            cout << "#";
        }
        cout << "\n";
    }
}

int main(){
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}