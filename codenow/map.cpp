#include <iostream>
#include <map>
using namespace std;

int main(){
    map<int,int> mp;
    mp.insert({2, 30});
    mp.insert({1, 40});
    mp.insert({3, 20});
    mp.insert({4, 50});

    cout << "Elements from position of 3 in the map are: \n";
    cout << "KEY\tElement\n";
    for(auto itr = mp.find(3); itr != mp.end(); itr++){
        cout << itr->first << '\t' << itr->second << "\n";
    }
    return 0;
}