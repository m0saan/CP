#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int t, n;
	cin >> t;
	vector<vector<int>> v(t);
	for (size_t i=0; i<t; ++i){
		cin >> n;
		v[i].resize(n);
		for (size_t j{}; j<n; ++j)
			cin >> v[i][j];
	}
	for (int i{}; i<t; i++) {
	    sort(v[i].begin(), v[i].end());
        for (int j{}; j < v[i].size(); j++) {
            if (j+1 < v[i].size() && abs(v[i][j] - v[i][j+1]) <= 1) {
                v[i].erase(find(v[i].begin(), v[i].end(), min(v[i][j], v[i][j + 1])));
                j = -1;
            }
        }
        if (v[i].size() == 1) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
	return 0;
}

/*
 * 13
1
1
2
1 1
1
35
2
35 35
1
50
2
50 50
2
1 2
3
1 2 1
2
4 5
3
4 5 5
2
50 49
3
49 50 50
3
3 1 2
 */


/*
 * 35
1
1
2
1 1
1
35
2
35 35
1
50
2
50 50
2
1 2
3
1 2 1
2
4 5
3
4 5 5
2
50 49
3
49 50 50
3
3 1 2
4
3 1 2 2
3
31 32 33
4
32 31 31 33
3
48 50 49
4
48 50 48 49
4
2 3 4 1
5
1 2 4 4 3
4
49 47 48 50
5
47 49 48 48 50
4
48 47 49 50
5
50 49 48 50 47
5
3 4 2 1 5
6
4 5 4 3 2 1
5
20 22 23 21 24
6
23 24 20 22 21 23
5
50 47 48 49 46
6
48 50 46 49 46 47
6
3 1 4 5 2 6
7
5 1 3 3 6 2 4
6
44 42 45 41 40 43
7
45 45 43 42 40 41 44
6
45 49 46 47 50 48
 */