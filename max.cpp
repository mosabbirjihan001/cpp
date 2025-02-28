#include<iostream>
using namespace std;
int main(){
    int num1 , num2 , num3 ;
    cout << "Enter 3 Integers : ";
    cin >> num1 >> num2 >> num3 ;
    if(num1 > num2 && num1 > num3){
        cout << "Max is : " << num1 << endl;
    }
    if(num2 > num1 && num2 >num3){
         cout << "Max is : " << num2 << endl;
    }
    else{
        cout << "Max is : " << num3 << endl;
    }
    return 0;
}