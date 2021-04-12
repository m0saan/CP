#include "../stdc++.h"
#include <array>

void passValue(int value)  // value is a copy of the argument
{
    value = 99; // so changing it here won't change the value of the argument
}

void passArray(int prime[5]) // prime is the actual array
{
    prime[0] = 11; // so changing it here will change the original argument!
    prime[1] = 7;
    prime[2] = 5;
    prime[3] = 3;
    prime[4] = 2;
}

// Trying to get the size of a fix array passed to a function.
void getArraySize(int arr[]) {

    // This will cause a compile time error.
    // std::cout << "the array has: " << std::size(arr) << " elements." << std::endl;

    // We can use instead the sizeof operator
    // it doesn't error out like std::size() does. Instead, it returns the size of a pointer.
    std::cout << "Using the size of operator: " << sizeof(arr) / sizeof(arr[0]) << std::endl; // prints 2.
}


int main() {
#if (0)
    int value{ 1 };
    std::cout << "before passValue: " << value << '\n';
    passValue(value);
    std::cout << "after passValue: " << value << '\n';

    int prime[5]{ 2, 3, 5, 7, 11 };
    std::cout << "before passArray: " << prime[0] << " " << prime[1] << " " << prime[2] << " " << prime[3] << " " << prime[4] << '\n';
    passArray(prime);
    std::cout << "after passArray: " << prime[0] << " " << prime[1] << " " << prime[2] << " " << prime[3] << " " << prime[4] << '\n';


    // Getting the size of the array
    std::cout << "The array has: " << std::size(prime) << " elements\n";
#endif
#if (0)
    std::array<int, 3> myArray{}; // declare an integer array with length 3
    std::array myArray2 = {1, 2, 3, 4}; // initializer list
    std::array myArray3{1, 2, 3, 4}; // list initialization

    /*
     * since C++17, it is allowed to omit the type and size.
     */
    std::array array1 = {1, 2, 3, 4};  // The type is deduced to std::array<int, 5>
    std::array array2{1., 2., 3., 4.}; // std::array<double, 5>

    /*
     * Since C++20, it is possible to specify the element type but omit the array length.
     */
    auto arr1 { std::to_array<int, 5>({9, 7, 5, 3, 1})}; // Specify type and size
    auto arr2 { std::to_array<int>({9, 7, 5, 3, 1})}; // Specify type only, deduce size
    auto arr3 { std::to_array({9, 7, 5, 3, 1})}; // Deduce type and size
#endif

#if (1)
/*
 * You can assign values to the array using an initializer list.
 */
    std::array<int, 5> myArray{};
    myArray = { 0, 1, 2, 3, 4 }; // okay

    std::cout << myArray.at(1) << std::endl;
    std::cout << myArray.at(3) << std::endl;
    // std::cout << myArray.at(6) << std::endl; // // array element 6 is invalid, will throw an error

    std::cout << "length: " << myArray.size() << '\n'; // Get the array length

    /*
     * loop over std::array using range-based and for loops.
     */

    std::cout << "Using range-based for-loop: ";
    for (int &item : myArray)
        std::cout << item << " ";
    std::cout << std::endl;

    std::cout << "Using classic for-loop: ";
    for (std::array<int, myArray.size()>::size_type i = 0; i <  myArray.size(); ++i)
        std::cout << myArray[i] << " ";
    std::cout << std::endl;

#endif
    return 0;
}
