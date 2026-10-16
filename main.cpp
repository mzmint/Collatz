#import <iostream>
#include "MintLib.h"

int main() {
    long long n;
    std::cout << "Choose a number" << std::endl;
    std::cin >> n;
    Mint::collatzFull(n);

    return 0;
}