#include<iostream>
using namespace std;
int main(){
    int a , b , c ;
    cin >> a >> b >> c ;

   int firstMultiple = ((a + c - 1) / c) * c;

   if(firstMultiple > b){
    cout << -1 << endl;
   }
   else{
    cout << firstMultiple << endl;
   }

   return 0;
}
