// C++ program to demonstrate the use of vector by adding elements to it using push_back() method
#include <iostream>
#include <vector>

int main() {
  std::vector<int> num {1, 2, 3, 4, 5};

  std::cout << "Initial Vector: ";

  for (const int& i : num) {
    std::cout << i << "  ";
  }
  
  // add the integers 6 and 7 to the vector
  num.push_back(6);
  num.push_back(7);

  std::cout << "\nUpdated Vector: ";

  for (const int& i : num) {
    std::cout << i << "  ";
  } 

  return 0;
}