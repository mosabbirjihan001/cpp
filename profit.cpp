#include<iostream>
using namespace std;
int main(){
    int sp , cp ;
    cout << "Enter Selling Price : " ;
    cin >> sp;
    cout << "Enter Cost Price : " ;
    cin >> cp;

    if(sp > cp){
        int Profit = sp - cp ;
            cout << "Profit amount is : " << Profit << endl;
    }
    else if (cp > sp){
         int Loss = cp - sp;
             cout << "Loss amount is : " << Loss << endl;
    } 
    return 0;
}