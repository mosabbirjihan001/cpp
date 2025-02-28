#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a Decimal Number : ";
    cin >> n;

    int ans = 0;
    int power = 1 ;

    while(n>0){
        int remainder = n % 2;
        ans+= remainder * power;
        n/=2;
        power*= 10;
    }
    cout << "Binary : " << ans << endl;
    return 0;
}