#include <iostream>
#include <vector>
#include <map>
#define improve                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
 
using namespace std;
int main()
{
    improve;
    int n, t;
    map<int, int> mp;
    vector<int> v;
    cin >> n >> t;
    for (int i = 1; i <= n; i++)
    {
        int ns;
        cin >> ns;
        if (mp[ns] == 0)
        {
            v.push_back(i);
        }
        mp[ns]++;
    }
    if (mp.size() >= t)
    {
        cout << "YES" << endl;
        for (int i = 0; i < t; i++)
        {
            cout << v[i] << " ";
        }
    }
    else
        cout << "NO";
    return 0;
}