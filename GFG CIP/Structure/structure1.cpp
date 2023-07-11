#include<iostream>
using namespace std;

struct Point{
    int x;
    int y;
};

int main(){
    Point P;

    P.x = 10;
    P.y = 20;

    cout<<P.x<< " "<< P.y;

    return 0;
}