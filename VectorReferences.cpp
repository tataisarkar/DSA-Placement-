#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v){
    int i;

    // v.push_back(2);
    v.pop_back();
    for(i=0;i<v.size();i++){
        cout<<v[i]<< " ";
    }

    cout<<endl;
}

int main(){
    vector<int> v1;
    int x=0;

    cout<<"Enter elements of vector (Press 999 to terminate vector entry): ";
    while(1){
        cin>>x;
        if(x == 999)
            break;
        v1.push_back(x);
    }

    printVec(v1);

    for(int i=0;i<v1.size();i++)
        cout<<v1[i]<<" ";
}