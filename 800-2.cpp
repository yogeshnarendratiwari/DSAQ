#include <iostream>
#include <cmath>
using namespace std;

class Votes
{
public:
    int number_of_votes(int c1, int c2, int c3, int c)
    {   int max1 = max(c1,c2);
        int max2= max(c2,c3);
        int max3 = max(max1,max2);
        if(c==max3)
        return 0;
        return max3 - c + 1;
    }
};

int main()
{   Votes v;
    int n;
    cin>>n;
    int c1;
    int c2;
    int c3;
    for(int i=0 ; i<n ; i++){
        cin>>c1>>c2>>c3;
        cout<<v.number_of_votes(c1,c2,c3,c1)<<" "<<v.number_of_votes(c1,c2,c3,c2)<<" "<<v.number_of_votes(c1,c2,c3,c3)<<endl;
    }
}