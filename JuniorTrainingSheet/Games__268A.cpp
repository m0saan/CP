#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n{}, h{}, a{}, ans{};
	cin >> n;
	vector<int> home;
	vector<int> gest;
	for(int i=0; i<n; ++i){
		cin >> h >> a;
		home.push_back(h), gest.push_back(a);
	}
	for(size_t i=0; i<home.size(); ++i){
		ans += count(home.begin(), home.end(), gest[i]);
	}
	cout << ans << endl;
	return 0;
}
