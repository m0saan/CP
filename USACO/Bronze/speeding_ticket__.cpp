//
// Created by moboustt on 2/7/2021.
//

#if (1)
#include "../../stdc++.h"
#endif

# if (0)
#include <bits/stdc++.h>
#endif

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

int speedLim[100];
void solve(){
	const char *filename = "speeding";
	//setIO(filename);
	int N, M,d, s;
	int curr = 0;
	cin >> N >> M;
	for (int i = 0; i < N; ++i) {
		cin >> d >> s;
		for (int j = 0; j < d; ++j) {
			speedLim[curr++] = s;
		}
	}
	curr = 0;
	for(int i = 0; i < M; ++i) {
		cin >> d >> s;
		for(int j = 0; j < d; ++j) {
			speedLim[curr] = abs(speedLim[curr] - s);
			curr++;
		}
	}
	cout << *max_element(speedLim, speedLim+100) << endl;
}

int main(){
	solve();
	return 0;
}

/*
3 3
20 75
50 35
50 45
40 76
20 30
40 40
 ---
3 3
20 75
50 35
50 45
20 75
50 35
50 45
 */
