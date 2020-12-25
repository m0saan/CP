#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	size_t n{};
	cin >> n;
	vector<int> v(n);
	for(size_t i{}; i<n; ++i)
		cin >> v[i];
	sort(v.begin(), v.end());
	for (int&e : v)
		cout << e << ' ';
	return 0;
}
