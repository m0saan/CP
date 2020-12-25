#include <iostream>
#include <string>
using namespace std;

int main(){
	string s;
	cin >> s;
	int max{};
	for (char &c : s) if (c > max) max = c;
	for (char &c : s)
		if (c == max) cout << c;

	return 0;
}
