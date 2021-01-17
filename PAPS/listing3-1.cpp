#include <set>
#include <iostream>
using namespace std;
int main(){

    set<int> s;
    s.insert(4);
    s.insert(7);
    s.insert(1);

    // find returns an iterator to the element if it exists
    auto it = s.find(4);
    // ++ moves the iterator to the next element in order
    ++it;
    cout << *it << endl;

    // if nonexistant, find returns end()
    if (s.find(7) == s.end()) {
        cout << "7 is not in the set" << endl;
    }

    // erase removes the specific element
    s.erase(7);

    if (s.find(7) == s.end()) {
        cout << "7 is not in the set" << endl;
    }

    cout << "The smallest element of s is " << *s.begin() << endl;
    cout << "The largest element of s is " << *--s.end() << endl;
}
