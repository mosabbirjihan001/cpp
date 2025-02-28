#include <iostream>
#include <cmath>

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= std::sqrt(n); ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int num;
    std::cin >> num;
    std::cout << (isPrime(num) ? "Prime\n" : "Not Prime\n");
    
}
