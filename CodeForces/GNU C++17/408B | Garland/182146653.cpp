#include <iostream>
#include <map>
#define improve                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
 
using namespace std;
int main()
{
    improve;
    int counter = 0, a1, b1;
    string a, b;
    map<char, int> mp;
    cin >> a >> b;
    a1 = a.size();
    b1 = b.size();
    for (int i = 0; i < a1; i++)
    {
        mp[a[i]]++;
    }
    for (int i = 0; i < b1; i++)
    {
        if (!(mp.find(b[i]) != mp.end()))
        {
            cout << -1;
            return 0;
        }
    }
    for (int i = 0; i < b1; i++)
    {
        if (mp[b[i]])
        {
            counter++;
            mp[b[i]]--;
        }
    }
    cout << counter;
    return 0;
}