#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string sortString(string &str)
{
    sort(str.begin(), str.end());
    for (int i = 0; i < str.length(); i++)
        str[i] = tolower(str[i]);
    
    return str;
}
int main()
{
    short t, n, count;
    string s, temp = "timru", m;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> s;
        m = sortString(s);
        if (n == 5 && m == temp)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}