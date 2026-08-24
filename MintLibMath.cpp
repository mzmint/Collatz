#include <iostream>
#include "MintLibMath.h"

namespace Mint {
    void collatz(int n) {
        if (n <= 0) {
            std::cout << "Please enter a positive integer";
        } else {
            std::cout << n;
            int length = 1;
            int largest = 1;
            while (n != 1) {
                std::cout << " -> ";
                if (n % 2 == 0) {
                    std::cout << n / 2;
                    n = n / 2;
                } else {
                    std::cout << 3 * n + 1;
                    n = 3 * n + 1;
                }
                length++;
                if (n > largest) {
                    largest = n;
                }
            }
            std::cout << "\nLenght: " << length;
            std::cout << "\nLargest: " << largest;
        }
    }
}
