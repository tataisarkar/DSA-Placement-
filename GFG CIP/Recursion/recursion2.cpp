#include<bits/stdc++.h>
using namespace std;

void fun1(int n){
    if(n==0){   // Base Case
        return ;
    }

    cout<<"GFG"<<endl;

    fun1(n-1);
}

int main(){
    fun1(2);

    return 0;
}