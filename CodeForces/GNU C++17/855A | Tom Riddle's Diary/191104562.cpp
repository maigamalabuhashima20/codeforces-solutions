#include <iostream>
#include <map>
#define improve                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
 
using namespace std;
int main()
{
    improve;
    map<string, int> mp;
    // map<string, bool>::iterator it;
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        mp[s]++;
        if (mp[s] == 1)
            cout << "No\n";
        else
            cout << "YES\n";
    }
    return 0;
}