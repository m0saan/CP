#include <iostream>
#include <vector>
using namespace std;

class Point{
public:
    int x;
    int y;
};

int main(){
    int n, x,y, a{},b{},c{},d{};
    cin >> n;
    vector<Point> points(n);
    for (int i = 0; i < n; ++i) {
        cin >> x >> y;
        points[i] = Point{x, y};
    }
    for (int i = 0; i < n; ++i) {
        if (points[i].x <= 0) a++;
        else if (points[i].x >= 0) b++;

        if (points[i].y <= 0) c++;
        else if (points[i].y >= 0) d++;
    }
    if (min(min(a,b),min(c,d)) <= 2) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}