#include<bits/stdc++.h>
using namespace std;

void fun1(){
    cout<<"GFG"<<endl;

    static int x =10;

    x --;
    
    if(x!=0)
        fun1();
}

int main(){
    fun1();

    return 0;
}