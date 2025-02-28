#include<iostream>
using namespace std;
int main(){
    float num1, num2, num3;
    cout << "Enter 3 numbers :" ;
    cin >> num1 >> num2 >> num3;
    if(num1 > num2 && num1 > num3){
        cout << "Largest :" << num1 ;
    }
    else if(num2 > num1 && num2 > num3){
        cout << "Largest :" << num2;
    }
    else{
        cout << "Largest :" << num3 ;
    }
    return 0;
}