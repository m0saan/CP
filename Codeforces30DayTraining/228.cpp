#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
	unordered_set<int> s;
	int in;
	for (size_t i=0; i<4; ++i){
		cin >> in;
		s.insert(in);
	}
	cout << 4 - s.size() << endl;
	return 0;
}
