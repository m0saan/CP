//
// Created by moboustt on 9/4/2021.
//

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
    // setIO("paint");
    int b1_lower_left_x, b1_lower_left_y, b1_upper_right_x, b1_upper_right_y;
    int b2_lower_left_x, b2_lower_left_y, b2_upper_right_x, b2_upper_right_y;
    int t_lower_left_x, t_lower_left_y, t_upper_right_x, t_upper_right_y;
    cin >> b1_lower_left_x >> b1_lower_left_y >> b1_upper_right_x >> b1_upper_right_y;
    cin >> b2_lower_left_x >> b2_lower_left_y >> b2_upper_right_x >> b2_upper_right_y;
    cin >> t_lower_left_x >> t_lower_left_y >> t_upper_right_x >> t_upper_right_y;


    auto SI = max(0, min(XA2, XB2) - max(XA1, XB1)) * max(0, min(YA2, YB2) - max(YA1, YB1));

    cout <<  SI << endl;

    return 0;
}
