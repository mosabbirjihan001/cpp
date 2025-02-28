#include<iostream>
using namespace std;
int main(){
    int n, sum = 0, digits = 0;
    cout << "Enter the integer :";
    cin >> n;
    n = abs(n);
    while(n>0){
        sum+=n%10;
        n/=10;
        digits++;
    }
    cout << "The sum of digits :" << sum << endl;
    cout << "Number of digits are :" << digits << endl;

    return 0;
}