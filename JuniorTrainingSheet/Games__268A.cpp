#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n{}, h{}, a{}, ans{};
	cin >> n;
	vector<pair<int, int>> vPr;
	int nOfGames = n * (n-1);
	for(int i=0; i<nOfGames; ++i){
		cin >> h >> a;
		vPr.push_back(pair<int,int>(h,a));
	}
	for(auto &pair : vPr)
		if (binary_search(vPr.begin(), vPr.end(), pair.second)) ans++;
	return 0;
}
