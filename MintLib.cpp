#include <iostream>
#include "MintLib.h"

namespace Mint {
    void collatz(long long n) {
        if (n <= 0) {
            std::cout << "Please enter a positive integer";
        } else {
            std::cout << n;
            int length = 1;
            long long largest = 1;
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
            std::cout << "\nLength: " << length;
            std::cout << "\nLargest: " << largest;
        }
    }

    bool isPrime(int n) {
        if (n < 2) return false;
        if (n % 2 == 0 || n % 3 == 0) return false;
        for (int i = 2; i * i <= n; i++)
            if (n % i == 0) return false;
        return true;
    }

    int mobius(int n) {
        if (n == 1) return 1;
        int p = 0;
        for (int i = 1; i <= n; i++) {
            if (n % i == 0 && isPrime(i)) {
                if (n % (i * i) == 0) return 0;
                else p++;
            }
        }
        return (p % 2 != 0)? -1 : 1;
    }
}
