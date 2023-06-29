#include<bits/stdc++.h>
using namespace std;

int main(){
    int x = 10, y=20;
    int &z = x;

    z = y;
    z = z+ 5;

    cout<<x<<" " // 25
        <<y<<" " // 20
        <<z;     // 25

    return 0;
}