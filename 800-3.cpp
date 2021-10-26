#include <bits/stdc++.h>
using namespace std;

class Damage
{
public:
    int damage_count(int enemy_health, vector<int> v)
    {
        int damage_value = 0;
        int count = 0;
        int health = enemy_health;

        int i = v.size() - 1;

        while (true)
        {
            damage_value = damage_value + v[i];

            if (damage_value >= health)
                return count;
            if (i == v.size() - 3)
                i = v.size() - 1;
            count++;
            i--;
        }
    }
};

int main()
{
    int number_of_weapons;
    cin >> number_of_weapons;
    int enemy_health;
    cin >> enemy_health;
    int n;
    vector<int> v;
    for (int i = 0; i < number_of_weapons; i++)
    {
        cin >> n;
        v.push_back(n);
    }
    sort(v.begin(), v.end());

    Damage d;
    cout << d.damage_count(enemy_health, v) << endl;
}