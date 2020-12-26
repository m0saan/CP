#include <iostream>
#include <string>

using namespace std;
int main(){
	size_t ans{};
	string s,t;
	cin >> s >> t;
	
	for(size_t i{}, j{}; i<t.size() && j<s.size(); ++i){
		if (s[j] == t[i]) { ans++, j++;};	
	}
	cout << ans+1 << endl;
	return 0;
}
