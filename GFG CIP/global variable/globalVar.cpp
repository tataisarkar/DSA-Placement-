#include<iostream>
using namespace std;

extern int x; // extern - external linkage

int main(){
    cout<<x;

    return 0;
}

int x = 10;