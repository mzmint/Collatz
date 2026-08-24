#import <iostream>
#include "MintLibMath.h"

int main() {
    int n;
    std::cout << "Choose a number" << std::endl;
    std::cin >> n;
    Mint::collatz(n);

    return 0;
}