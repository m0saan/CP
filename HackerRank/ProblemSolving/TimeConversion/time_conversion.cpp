//
// Created by one for all on 23/09/2020.
//
#include <string>
#include <iostream>

int main(){
    st::string str ( "07:05:45PM" );
    auto substr = str.substr(0, 2);
    std::cout << substr << std::endl;

    return 0;
}