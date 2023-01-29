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
    short t, n;
    string s, temp = "timru";
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> s;
        s = sortString(s);
        if (n == 5 && s == temp)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}