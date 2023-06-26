#include<iostream>
using namespace std;

int &fun(){
    static int x = 10; // code works fine!
    // int x = 10; // warning: reference to local variable 'x' returned

    return x;
}

int main(){
    int &z = fun();

    cout<<fun()<<" ";
    
    z = 30;

    cout<<fun();

    return 0;
}