#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	string f,s;
	cin >> f >> s;
	for_each(f.begin(), f.end(), [](char &c){ c = tolower(c);});
	for_each(s.begin(), s.end(), [](char &c){ c = tolower(c);});
	if (f > s) cout << 1 << endl;
	else if (f < s) cout << -1 << endl;
	else cout << 0 << endl;
	return 0;
}
