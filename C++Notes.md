## This file contains the notes are taken along side re-learning C++. 

- A good rule of thumb is that after reading a value with std::cin, remove the newline from the stream. This can be done using the following:
  `std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');`