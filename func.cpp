#include <iostream>
using namespace std;

string welcome( string name ){
    return " Welcome " + name ;
}

void fun(string name){
    cout << "Are you having fun " << name << "?" ;
}

int main(){
    // string str = welcome("Jihan");
    // cout << str << endl;
    fun("JIHAN");
}