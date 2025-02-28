#include<iostream>
using namespace std;
int main(){
    cout << "Enter a integer : ";
    int n , i , sum = 0;
    cin >> n;
    for( i = 1 ; i <= n ; i ++){
        sum+=i ;
    }  
    cout << "Sum : " << sum << endl;

    return 0; 
}