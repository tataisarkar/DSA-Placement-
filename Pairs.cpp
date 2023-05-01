#include<bits/stdc++.h>

using namespace std;

int main(){
    int i;

    pair<int, string> p;

    // p = make_pair(2, "abc");    // first way to insert value in pair
    p = {2, "abc"};             // second way to insert value in pair

    cout<<p.first << " " <<p.second << endl;

    // to copy one pair to another
    pair<int, string> p2 = p;   // first way to copy

    p2 = p;                     // second way to copy

    cout<<p2.first << " "<< p2.second << endl;

    // to change value in a pair
    pair<int, string> p3;

    p3 = p;

    p3.first = 3;

    cout<<p3.first << " "<< p3.second << endl;

    // change value of pair by referencing
    pair<int, string> &p4 = p;
    p4.first = 1000;

    cout<<p.first << " "<< p.second << endl;

    // pair arrays
    pair<int, int> myArray[3];
    myArray[0] = {1, 2};
    myArray[1] = {2, 3};
    myArray[2] = {3, 4};

    for(i=0;i<3;i++){
        cout<<myArray[i].first<<" ";
        cout<<myArray[i].second<<" ";
        cout<<endl;
    }



    return 0;
}