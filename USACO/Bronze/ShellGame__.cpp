//
// Created by moboustt on 12/4/2021.
//

//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;

using ll = long long;

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
    setIO("shell");
    int N, a, b,g, ans{};
    cin >> N;
    int count[3] = {};
    int shells[3] = {1,2,3};
	for(int i = 0; i < N; ++i)
	{
		cin >> a >> b >> g;
		swap(shells[a-1], shells[b-1]);
		count[shells[g-1]-1]++;
	}
	std::sort(count, count+3);
	std::cout << count[2] << std::endl;
    return 0;
}
