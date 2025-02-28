#include<iostream>
using namespace std;
int main(){
    int a , b, c ;
    cout << "Enter 3 Integers : ";
    cin >> a >> b >> c;

    if(a < b && a < c){
        cout << "Minimum number is : " << a << endl;
    }
    if(b < a && b < c){
         cout << "Minimum number is : " << b << endl;
    }
    if(c < a && c < b){
        cout << "Minimum number is : " << c << endl;
    }
    return 0;
}