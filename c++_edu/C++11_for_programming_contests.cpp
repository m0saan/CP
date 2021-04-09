//
// Created by moboustt on 23/3/2021.
//
#if(0)
    #include <bits/stdc++.h>
#endif

#if(1)
    #include "stdc++.h"
#endif

using namespace std;
void passArray(int prime[5]);

using ll = long long;

// You can use '#' sign to get exact name of an argument passed to a macro:
#define what_is(x) cerr << #x << " is " << x << endl;

#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); \
	istream_iterator<string> _it(_ss); err(_it, args); }

void err(const istream_iterator<string>& it) {}

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

void setIO(const string& name) { // name is nonempty for USACO file I/O
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); // see Fast Input & Output
	// alternatively, cin.tie(0)->sync_with_stdio(0);
	if (sz(name)) {
		if (freopen((name + ".in").c_str(), "r", stdin) == nullptr)
			cout << "Something went wrong" << endl; // see Input & Output
		if (freopen((name + ".out").c_str(), "w", stdout) == nullptr)
			cout << "Something went wrong" << endl;
	}
}

template<typename T>
struct number_iterator : std::iterator<random_access_iterator_tag, T> {
	T v;

	[[maybe_unused]] explicit number_iterator(T _v) : v(_v) {}

	explicit operator T &() { return v; }

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

template<typename T>
ostream &operator<<(ostream &ostream, vector<T> const &container) {
	ostream << "[ ";
	for (auto &e : container)
		ostream << e << " ";
	ostream << ']' << endl;
	return ostream;
}

int sum() { return 0; }

template<typename T, typename... Args>
auto sum(T a, Args... args) { return a + sum(args...); }

constexpr int arrSize = 3;
[[maybe_unused]] int arr1D[arrSize] = {1, 2, 3};
int arr2D[arrSize][arrSize] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };

typedef tuple<int,int,int> State; // operator< defined

int main() {
#if 0
	std::array<int, 10> arr{1, 2, 3, 4, 5, 6};
	for(auto i : range(10))
		cout << i << endl;
#endif

#if 0
	vector<int> v;
	v.push_back(10);
	v.push_back(20);

	// Instead

	vector<int> anotherV;
	anotherV = {10, 20};

	cout << v;
	cout << anotherV;
#endif

#if 0
	int x = 10;
	string str = "Hello C++";
	what_is(x);
	what_is(str);
#endif

#if (0)
	// Get a gcd of two numbers with out re-implementing it.
	auto gcd = std::__1::gcd(10, 20);
	what_is(gcd);

	// This function returns 1 + least significant 1-bit of x.
	auto x = ffs(0); // return 0
	what_is(x);
	x = ffs(1); // return 1
	what_is(x);
	x = ffs(2); // return 2 -> since 2 == 10
	what_is(x);
	x = ffs(4); // return 3 -> since 4 == 100
	what_is(x);

	// This function returns number of leading 0-bits of x which starts from most significant bit position.
	auto y = __builtin_clz(10); // return 28 since 10 == ...1010 in binary representation. [...] for leading 0s
	// Explanation:
	// Number of bits in a unsigned int is 32. so function returns 32 — 4 = 28.
	what_is(y);
#endif

#if (0)
	std::cout << sum(5, 7, 2, 2) + sum(3.4, 4.5) << endl;
	int c =20, d = 40;
	error(10, 20, c , d);
#endif

#if (0)
	int i, j;
#if(0)
	for (i = 0; i < arrSize; i++) {
		for (j = 0; j < arrSize; j++)
			cout << arr2D[i][j] << " ";
		cout << "\n";
	}
#endif

	// The above code is equivalent to the following code.
	for (i = 0; i < arrSize; i++) {
		for (j = 0; j < arrSize; j++)
			cout << arr2D[i][j] << " \n"[ j == arrSize-1];
	}
#endif


	// You can also use ignore keyword in tie to ignore a value.
#if (0)
	tuple<int, int, int, char> t (3, 4, 5, 'g');
	int a, b;
	tie(ignore, ignore, a, b) = t;
	cout << a << ' ' << static_cast<char>(b) << '\n';
#endif

#if (0)
	using a non-const variable
		int daysPerWeek{};
	std::cin >> daysPerWeek;
	int numberOfLessonsPerDay[daysPerWeek]{}; // Not ok -- daysPerWeek is not a compile-time constant!

	// using a runtime const variable
	int temp{ 5 };
	const int daysPerWeek{ temp }; // the value of daysPerWeek isn't known until runtime, so this is a runtime constant, not a compile-time constant!
	int numberOfLessonsPerDay[daysPerWeek]{}; // Not ok
#endif

#if (0)

	// Initialize all elements to 0
	int array[5]{ };

	// Initialize all elements to 0.0
	double array_d[5]{ };

	// Initialize all elements to an empty string
	std::string array_str[5]{ };

	int arr1[5]{ 0, 1, 2, 3, 4 }; // explicitly define the length of the array
	int arr2[]{ 0, 1, 2, 3, 4 }; // let the initializer list set length of the array

	// Arrays and enums
	enum StudentNames
	{
		kenny, // 0
		kyle, // 1
		stan, // 2
		butters, // 3
		cartman, // 4
		max_students // 5
	};

	int testScores[max_students]{}; // allocate 5 integers
	testScores[stan] = 76; // stan == 2 equivalent to testScores[2]
	cout << testScores[stan] << endl; // prints 76

#endif

#if (1)
	int arr[] = {2,3,5,7,11};
	cout << "before passing it to passArray: " << arr << endl;
	passArray(arr);
	cout << "after passing it to passArray: " << arr << endl;

#endif
	return 0;
}


void passArray(int prime[5]) { // prime is the actual array 
	prime[0] = 11; // so changing it here will change the original argument!
	prime[1] = 7;
	prime[2] = 5;
	prime[3] = 3;
	prime[4] = 2;
}
