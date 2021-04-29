#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int N,Q, i, j;
	
	cin >> N >> Q;
	
	string s;
	for(i = 0; i < N; i++)
		s += (char)('A' + i);
	
	
	for(j = 0; j < N; j++){
		cout << "? " << s[j] << " " << s[j+1] << s[j+2] << "\n";
		fflush(stdout);
		char ans;
		cin >> ans;
		if(ans == '>') swap(s[j+1], s[j]);
		if(ans == '<') swap(s[j], s[j+1]);
		}
	cout << "! " << s << "\n";
	fflush(stdout);
	return 0;
}
