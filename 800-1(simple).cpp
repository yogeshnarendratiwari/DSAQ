#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test_cases;
    cin >> test_cases;
    int c;
    cin >> c;
    int arr[2][c];
    string s1="";
    string s2="";
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < c; y++)
        {
            cin >> arr[x][y];
            if(x==0)
            s1=s1+to_string(arr[x][y]);
            else
            s2=s2+to_string(arr[x][y]);

        }
    }
    string result="Yes";
    for(int i=0 ; i<c ;i++){
        if(s1.at(i)=='1' && s2.at(i)=='1')
        result="No";
    }
    cout<<result<<endl;
}