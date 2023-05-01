#include<bits/stdc++.h>
using namespace std;

void printVect(vector<int> v){
    cout<<"size: "<<v.size()<<endl;
    for(int i= 0;i<v.size();i++){
        cout<<v[i];
        cout<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> v; // empty vector, size=0
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        printVect(v);
        v.push_back(x); // 0(1)
    }

    printVect(v);

    cout<<endl;

    vector<int> v1(5);
    printVect(v1);

    cout<<endl;

    vector<int> v2(5, 3); // vector of size = 5, with default value = 3
    printVect(v2);

    v2.pop_back(); // pop last element of any vector. 0(1) time 
    
    cout<<endl;

    // vector copy
    vector <int> v3 = v2; // 0(n)
    printVect(v3);

    return 0;
}