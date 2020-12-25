#include <iostream>
#include <string>
using namespace std;

int main(){
	int t, n;
	string s, out;
	cin >> t;
	for (int i=0; i<t; i++) {
		cin >> n;
		cin >> s;
		for(int j=0; j<s.size(); j+=2) out += s[j];
		cout << out << endl;
		out.clear();
	}
	return 0;
}
