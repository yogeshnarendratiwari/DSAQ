#include <iostream>
#include <map>
#include <vector>
using namespace std;

class CountAndSay
{
public:
    string count(int n)
    {
        string s = "1";
        string p = "";
        vector<string> v;
        if (n == 1)
            return s;
        map<string, int> m;
        for (int j = 2; j <= n; j++)
        {

            int length = s.length();
            for (int i = 0; i < length; i++)
            {
                m[s.substr(i, i + 1)]++;
            }
            for (auto x : m)
            {
                s = cantenation(NumToStr(x.second), x.first);
                p = p + s;
            }
            v.push_back(p);
            p = "";
            m.clear();
        }
        return v[v.size() - 1];
    }

    string NumToStr(int number)
    {
        return to_string(number);
    }

    string cantenation(string count, string s)
    {
        return count + s;
    }
};

int main()
{
    CountAndSay cas;
    cout << cas.count(1) << endl;
    cout << cas.count(2) << endl;
    cout << cas.count(3) << endl;
    cout << cas.count(4) << endl;
}