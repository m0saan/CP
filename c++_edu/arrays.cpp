#include "../stdc++.h"

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
void  getArraySize(int arr[]){

    // This will cause a compile time error.
    // std::cout << "the array has: " << std::size(arr) << " elements." << std::endl;

    // We can use instead the sizeof operator
    // it doesn’t error out like std::size() does. Instead, it returns the size of a pointer.
    std::cout << "Using the size of operator: " << sizeof(arr) / sizeof(arr[0]) << std::endl; // prints 2.
}





int main() {
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
    return 0;
}
