#include <iostream>
#include <deque>
#include <map>
using namespace std;
int main()
{
    int n;
    cin >> n;
    deque<string> d;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        d.push_front(str);
    }
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
 
        if (mp[d[i]] == 0)
            cout << d[i] << "\n";
        mp[d[i]] = 1;
    }
    return 0;
}