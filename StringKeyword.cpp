#include<iostream>
#include<string>

using namespace std;

int main(){
    string str; // declaration of strings in cpp
    string str1 = "hello world"; // declaration of strings in cpp

    str = "hello world"; // valid for strings but not character arrays

    // cin>>str; // does not take spaces
    // getline(cin, str); // takes spaces
    cout<<str<<endl;


    // append strings

    // first method
    string s2 = "fam";
    string s3 = "ily";

    // s2.append(s3);
    // cout<<s2<<endl;

    // second method
    string s4;

    s4 = s2 + s3;
    cout<<s4<<endl;

    // to clear a string
    string s5;

    s5 = "hsdfljs";
    s5.clear();

    cout<<s5;

    // check if string is empty
    if(s5.empty()){
        cout<<"string is empty\n";
    }

    // erase method in strings...

    string s6;
    s6 = "nincompoop";

    s6.erase(3, 3); // starting index where the deletion will take place, how many elements to delete
    cout<<s6<<endl;

    return 0;
}