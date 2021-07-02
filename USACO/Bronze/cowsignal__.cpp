//
// Created by moboustt on 2/7/2021.
//

#include <iostream>

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


int main() {
	setIO("cowsignal");
	int N, M, K;
	cin >> M >> N >> K;
	string line;
	for(int i = 0; i < M; i++) {
		cin >> line;
		for(int t = 0; t < K; ++t) {
			for(auto const &ch : line) {
				int NN = (K * N) / line.length();
				for(int j = 0; j < NN; ++j)
					cout << ch;
			}
			cout << endl;
		}
	}

	return 0;
}

/*
XXXXXX..
XXXXXX..
XX....XX
XX....XX
XXXXXX..
XXXXXX..
XX....XX
XX....XX
XXXXXX..
XXXXXX..
 */