#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter an integer :";
    cin >> n;
    int reverse = 0;
    while(n!=0){
        int lastDigit = n % 10 ;
        reverse = reverse * 10 + lastDigit;
        n/=10;
    }
    cout << reverse << endl;
}