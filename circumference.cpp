#include <iostream>
int main() {

    // const uses UpperCase 
    // not changing things...

    const double PI = 3.1416;
    double radius = 14 ;
    double circumference = 2 * PI * radius ;

    std::cout << circumference << " cm" ;

    return 0;
}