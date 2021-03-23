//
// Created by moboustt on 23/3/2021.
//

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

using vi = vector<int>;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()

using pi = pair<int, int>;
#define f first
#define s second
#define mp make_pair

void setIO(string name) { // name is nonempty for USACO file I/O
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); // see Fast Input & Output
    // alternatively, cin.tie(0)->sync_with_stdio(0);
    if (sz(name)) {
        if (freopen((name + ".in").c_str(), "r", stdin) == NULL)
            cout << "Something went wrong" << endl; // see Input & Output
        if (freopen((name + ".out").c_str(), "w", stdout) == NULL)
            cout << "Something went wrong" << endl;
    }
}

template<typename T>
struct number_iterator : std::iterator<random_access_iterator_tag, T> {
    T v;

    number_iterator(T _v) : v(_v) {}

    operator T &() { return v; }

    T operator*() const { return v; }
};

template<typename T>
struct number_range {
    T b, e;

    number_range(T b, T e) : b(b), e(e) {}

    number_iterator<T> begin() { return b; }

    number_iterator<T> end() { return e; }
};

/* make_pair like functions for our range type */
template<typename T>
number_range<T> range(T e) { return number_range<T>(0, e); }

// inclusive range
template<typename T>
number_range<T> range(T b, T e) { return number_range<T>(b, e); }
template <typename T>
ostream & operator<<(ostream &ostream, vector<T> const & container) {
    ostream << "[ ";
    for (auto &e : container)
        ostream << e << " ";
    ostream << ']'<< endl;
    return ostream;
}


int main() {
#if 0
    std::array<int, 10> arr{1, 2, 3, 4, 5, 6};
    for(auto i : range(10))
        cout << i << endl;
#endif

#if 1
    vector<int> v;
    v.push_back(10);
    v.push_back(20);

    // Instead

    vector<int> anotherV;
    anotherV = {10, 20};

    cout << v;
    cout << anotherV;
#endif
    return 0;
}