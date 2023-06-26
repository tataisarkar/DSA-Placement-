#include<iostream>
using namespace std;

int &fun(){
    static int x = 10;
    return x;
}

int main(){
    int &z = fun();

    cout<<fun()<<" ";
    
    z = 30;

    cout<<fun();

    return 0;
}