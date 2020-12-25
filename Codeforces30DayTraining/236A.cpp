#include <iostream>
#include <set>
using namespace std;

int main(){
	string in;
	set<char> s;
	cin >> in;
	for (char &c: in)
		s.insert(c);
	if (s.size()%2==0) cout << "CHAT WITH HER!" << endl;
	else cout << "IGNORE HIM!" << endl;
	return 0;
}
