#include <iostream>
#include <vector>

std::vector<int> generateFibonacci(int n) {
    if (n == 0) return {};
    if (n == 1) return {0};

    std::vector<int> fib = {0, 1};
    for (int i = 2; i < n; ++i) {
        fib.push_back(fib[i - 1] + fib[i - 2]);
    }
    return fib;
}

int main() {
    int n;
    std::cin >> n;
    for (const auto& num : generateFibonacci(n)) {
        std::cout << num << " ";
    }
    std::cout << '\n';
}
