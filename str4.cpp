// Subsequences of a strng
#include <bits/stdc++.h>
using namespace std;

void subsequence(string s){
    int s;
    int e;
    int n=0;
    int i=0;
    while(n>s.length()){
       
            s=i;
            e=i+n+1;
            if(e>s.length())
            break;
            cout<<s.substr(0,e)<<" ";
            n++;
      
    }
}

int main(){

}