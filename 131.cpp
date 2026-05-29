#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    
    // initialize vector of int type
    std::vector<int> numbers = {3, 2, 5, 1, 4};

    // sort vector elements in ascending order
    std::sort(numbers.begin(), numbers.end());

    // print the sorted  vector 
    for (int number : numbers) {
        std::cout << number << "  ";
    }
    
    return 0;    
}