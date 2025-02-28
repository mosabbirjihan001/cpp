#include <iostream>
#include <string>

constexpr int reverseNumber(int num) {
    int reversed = 0;
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

int main() {
    int num;
    std::cin >> num;
    std::cout << "Reversed: " << reverseNumber(num) << '\n';
}
