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

    
    return 0;

}