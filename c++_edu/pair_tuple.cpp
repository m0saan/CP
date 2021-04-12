//
// Created by moboustt on 12/4/2021.
//

#include "../stdc++.h"

int main() {

    /*
     * pair<type1, type2> p: Creates a pair p with two elements with the first one being of type1 and the second one being of type2.
     * make_pair(a, b): Returns a pair with values a, b.
     * {a, b}: With C++11 and above, this can be used as to create a pair, which is easier to write than make_pair(a, b).
     * pair.first: The first value of the pair.
     * pair.second: The second value of the pai
     */
#if (0)
    std::pair<std::string, int> myPair1 = std::make_pair("Testing", 123);
    std::cout << myPair1.first << " " << myPair1.second << std::endl;

    std::pair<std::string, int> myPair2("C++", 20);
    std::cout << myPair2.first << " " << myPair2.second << std::endl;

    myPair1.first = "It is possible to edit pairs after declaring them";
    std::cout << myPair1.first << " " << myPair1.second << std::endl;

    std::pair<std::string, std::string> myPair3 = {"Testing", "curly braces"};
    std::cout << myPair3.first << " " << myPair3.second << std::endl;
#endif

    /*
     * Of course, we can hold more than two values with something like pair<int,pair<int,int>>,
     * but it gets messy when you need a lot of elements. In this case, using tuples might be more convenient.
     * tuple<type1, type2, ..., typeN> t: Creates a tuple with N elements, i'th one being of typei.
     * make_tuple(a, b, c, ..., d): Returns a tuple with values written in the brackets.
     * get<i>(t): Returns the i'th element of the tuple t. Can also be used to change the element of a tuple.
     * This operation only works for constant i. Namely, it is not allowed to do something like the following since i is not constant
     * tie(a, b, c, ..., d) = t : Assigns a, b, c, ..., d to the elements of the tuple t accordingly.
     */

    int a = 3, b = 4, c = 5;
    std::tuple<int, int , int> t1(a,b,c);
    std::cout << std::get<0>(t1) << " " << std::get<1>(t1) << " " << std::get<2>(t1) << std::endl;

    get<0>(t1) = 7;
    std::cout << get<0>(t1) << " " << get<1>(t1) << " " << get<2>(t1) << std::endl;

    std::tuple<std::string, std::string, int> tp2 = std::make_tuple("Hello", "world", 100);
    std::string s1,s2;
    int x;
    std::tie(s1,s2,x) = tp2;
    std::cout << s1 << " " << s2 << " " << x << std::endl;

    return 0;

}