#include<iostream>

using namespace std;

int main(){
    int x = 10;
    int &y = x;

    cout<<"x: "<< x << endl;

    cout<<"y: "<< y << endl;

    x = x + 5;

    cout<<"x: "<< x << endl;

    cout<<"y: "<< y << endl;

    return 0;
}