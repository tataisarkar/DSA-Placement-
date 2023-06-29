#include<bits/stdc++.h>
using namespace std;

int main(){
    int x = 10, &y=x;

    cout<<x;

    // &y = x; // throws error!

    cout<<"\ny: "<<y;

    return 0;
}