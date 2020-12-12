#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	string in;
	vector<int> v;
	cin >> in;
	if (in.size()==1){
		cout << in << endl;
		return 0;
	}
	for (char c : in)
		if (c != '+') v.push_back(c-48);
	sort(v.begin(), v.end());
	int i{};
	for (int elm : v){
		in[i++] = elm+48;
		in[i++] = '+';
	}
	cout << in << endl;
	return 0;
}
