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

  Operator	  Symbol	Form	 Operation
  left shift	<<	   x << y	  all bits in x shifted left y bits
  right shift	>>	   x >> y	  all bits in x shifted right y bits
  bitwise NOT	~	   ~x	      all bits in x flipped
  bitwise AND	&	   x & y	  each bit in x AND each bit in y
  bitwise OR	|	   x | y	  each bit in x OR each bit in y
  bitwise XOR	^	   x ^ y	  each bit in x XOR each bit in y
  
