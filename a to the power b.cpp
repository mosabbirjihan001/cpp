#include<iostream>
using namespace std;
int main(){
    int a , b;
    cout << "Enter the numbers :";
    cin >> a >> b;
    int result = 1;
    for(int i=0; i<b; i++){
        result = result * a;
    }
    cout << a << " to the power " << b << " is " << result << endl;
    return 0;
}