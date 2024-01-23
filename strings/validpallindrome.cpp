#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string isPallindrome(string s){
    string P = s;
    reverse(P.begin(), P.end());

    if(P==s){
        return "true";
    }
    else{
        return "false";
    }
}

int main(){
    string s;
    cout<<"enter a string:";
    cin>>s;
    cout<<isPallindrome(s);
    return 0;

}