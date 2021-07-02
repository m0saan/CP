//
// Created by moboustt on 29/6/2021.
//

#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

void setIO(const string &name) { // name is nonempty for USACO file I/O
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); // see Fast Input & Output
	// alternatively, cin.tie(0)->sync_with_stdio(0);
	if (freopen(("./" + name + ".in").c_str(), "r", stdin) == nullptr)
		cout << "Something went wrong" << endl; // see Input & Output
	if (freopen(("./" + name + ".out").c_str(), "w", stdout) == nullptr)
		cout << "Something went wrong" << endl;
}

int main()
{
	setIO("mixmilk");
	vector<int> buckets(3);
	vector<int> capacities(3);
	cin >> capacities[0] >> buckets[0] >> capacities[1] >> buckets[1] >> capacities[2] >> buckets[2];
	for(int i = 0; i < 100; ++i) {
		if (buckets[i % 3] + buckets[(i+1) % 3] < capacities[(i+1) % 3]) {
			buckets[(i + 1) % 3] += buckets[i % 3];
			buckets[i % 3] = 0;
		}
		else
		{
			int to_pour = capacities[(i+1) % 3] - buckets[(i+1) % 3];
			buckets[(i+1) % 3] += to_pour;
			buckets[i % 3] -= to_pour;
		}
	}
	for (auto const& elem : buckets)
		cout << elem << endl;
}