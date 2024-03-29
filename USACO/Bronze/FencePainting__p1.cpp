#include <bits/stdc++.h>

using namespace std;

using ll = long long;

// You can use '#' sign to get exact name of an argument passed to a macro:
#define what_is(x) cerr << #x << " is " << x << endl;

#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); \
istream_iterator<string> _it(_ss); err(_it, args); }

template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
    cerr << *it << " = " << a << endl;
    err(++it, args...);
}


using vi = vector<int>;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()

using pi = pair<int, int>;
#define f first
#define s second
#define mp make_pair
#define mt make_tuple
#define eb emplace_back

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
    setIO("paint");
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((a >= c && a >= d && b >= d && b >= c) || (c >= a && c >= b && d >= b && d >= a))
        cout << abs(b - a) + abs(d - c) << endl;
    else
        cout << abs(max({a, b, c, d}) - min({a, b, c, d})) << endl;

    return 0;
}
