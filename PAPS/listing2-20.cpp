#include <iostream>

using namespace std;

struct Point {
    double x;
    double y;
    
    Point(double theX, double theY) {
        x = theX;
        y = theY;
    }

    Point mirror() {
        return Point(x, -y);
    }

    Point translate(double X, double Y) { return Point(X, Y); }
};

int main(){
    Point p1(2.5, 4.5);
    Point p2 = p1.translate(10.5, 15.2);
    cout << p2.x << " " << p2.y << endl;
    return 0;
}

