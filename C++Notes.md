## This file contains the notes are taken along side re-learning C++. 

- A good rule of thumb is that after reading a value with std::cin, remove the newline from the stream. This can be done using the following:
  `std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');`
  
- About const keyword:
  `const double gravity { 9.8 }; // preferred use of const before type`
  `int const sidesInSquare { 4 }; // okay, but not preferred`

- Floating point equality
  * The equality operators (== and !=) are much more troublesome.
    Consider operator==, which returns true only if its operands are exactly equal.
    Because even the smallest rounding error will cause two floating point numbers
    to not be equal, operator== is at high risk for returning false when a true might be expected.
    Operator!= has the same kind of problem.
    
  * Donald Knuth, a famous computer scientist, suggested the following method
    in his book `“The Art of Computer Programming, Volume II: Seminumerical Algorithms (Addison-Wesley, 1969)”`:

    ` // return true if the difference between a and b is within epsilon percent of the larger of a and b
    bool approximatelyEqual(double a, double b, double epsilon) {
        return (std::abs(a - b) <= (std::max(std::abs(a), std::abs(b)) * epsilon));
    } ` 

  C++ provides 6 bit manipulation operators, often called bitwise operators:

  bitwise NOT	~	   ~x	      all bits in x flipped
  bitwise AND	&	   x & y	  each bit in x AND each bit in y
  bitwise OR	|	   x | y	  each bit in x OR each bit in y
  bitwise XOR	^	   x ^ y	  each bit in x XOR each bit in y
  
  |   Operator    |     Symbol	  |    Form	   |            Operation                |
  | ------------- | ------------- | ---------- | -------------------------------------
  |  left shift   |      <<       |.  x << y   |  all bits in x shifted left y bits
  |  right shift  |      <<       |.  x >> y.  |. all bits in x shifted right y bits
  
    
  * Internal global variables definitions:
      - `static int g_x;`          // defines non-initialized internal global variable (zero initialized by default)
      - `static int g_x{ 1 };`     // defines initialized internal global variable
  
      - `const int g_y { 2 };`     // defines initialized internal global const variable
      - `constexpr int g_y { 3 };` // defines initialized internal global constexpr variable
        
      - `static int foo() {};`     // defines internal function
    

* If you need global constants and your compiler is C++17 capable, prefer defining inline constexpr global variables in a header file.

`namespace constants`
`{`
`inline constexpr double pi { 3.14159 }; // note: now inline constexpr`
`inline constexpr double avogadro { 6.0221413e23 };`
`inline constexpr double my_gravity { 9.2 }; // m/s^2 -- gravity is light on this planet`
`}`


* Using declarations
    - The using declaration of using std::cout; tells the compiler that we’re going to be using the object cout from the std namespace. 
      So whenever it sees cout, it will assume that we mean std::cout.
    - If there’s a naming conflict between std::cout and some other use of cout, std::cout will be preferred.

  `using std::cout; // this using declaration tells the compiler that cout should resolve to std::cout`

* The using directive
    - The using directive using namespace std; tells the compiler that we want to use everything in the std namespace. 
      So if the compiler finds a name it doesn’t recognize, it will check the std namespace. 
      Consequently, when the compiler encounters cout (which it won’t recognize), it’ll look in the std namespace and find it there.
    - If there’s a naming conflict between std::cout and some other use of cout, the compiler will flag it as an error (rather than preferring one instance over the other).
