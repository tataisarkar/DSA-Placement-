#include<iostream>
using namespace std;

int main(){
    int arr[] = {10, 20};
    int *ptr = arr;

    *++ptr;

    cout<<arr[0]<<" "
        <<arr[1]<< " "
        <<*ptr;

    return 0;
}