#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }

    vector<int>::iterator it;

    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }

    for(auto element:v){
        cout<<element<<endl;
    }

    v.pop_back();

    for(auto element:v){
        cout<<element<<endl;
    } // 1 2

    vector<int> v2(3, 50);

    for(auto element:v2){
        cout<<element<<endl;
    }

    swap(v, v2);
    for(auto element:v){
        cout<<element<<endl;
    }
    for(auto element:v2){
        cout<<element<<endl;
    }

    sort(v2.begin(), v2.end());
    for(auto element:v2){
        cout<<element<<" ";
    }

    return 0;
}