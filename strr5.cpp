#include<iostream>
#include<map>
using namespace std;

void FindDuplicate(string* sp){
    string s = *sp;
    map <char , int> m;
    for(int i=0 ; i<s.length() ; i++){
        m[s[i]]++;
    }
    
    for(auto x : m){
        
    }
}

int main(){
    string str = "hello how are you";
    FindDuplicate(&str);
}