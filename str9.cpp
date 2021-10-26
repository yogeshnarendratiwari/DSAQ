#include <iostream>
#include <map>
#include <vector>
using namespace std;

class CountAndSay
{   public :
    string countAndSay(int n){
     
     for(int i=1 ; i<=n ; i++){
            
     }

    }

    void count(string s)
    {
        map<char, int> m;
        int length = s.length();
        for (int i = 0; i < length; i++)
        {
            m[s.at(i)]++;
        }
        //    <----Incomplete---->
    }

    string NumToStr(int number)
    {
        return to_string(number);
    }

    string cantenation(string count,string s){
        return count+s;
    }
};

int main()
{
}