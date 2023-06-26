#include<iostream>
using namespace std;

int main(){
    int x = 10, z = 20;
    int &y = x;

    y = z;

    y += 5;

    cout<<x<<endl;
    cout<<y<<endl;
    cout<<z;

    return 0;
}