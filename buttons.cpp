#include<iostream>
using namespace std;
int main(){
    int a , b ;
    cin >> a >> b ;

    if ( a < b)
    {
        swap(a, b);
    }
    
    int MaxCoins = a ;
    a--;
    MaxCoins += max(a, b);
    cout << MaxCoins << endl;
    
    return 0;
}

// #include <iostream>
// using namespace std;

// int main() {
//     int A, B;
//     cin >> A >> B;

//     if (A < B) {
//         swap(A, B);
//     }

//     int maxCoins = A;
//     A--; 

//     // Add the larger size of the two buttons for the second press
//     maxCoins += max(A, B);

//     cout << maxCoins << endl; // Output the result
//     return 0;
// }
