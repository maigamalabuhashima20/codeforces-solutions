#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string sortString(string &str)
{
    sort(str.begin(), str.end());
    return str;
}
int main()
{
    int t, n;
    string s, temp = "Timru";
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> s;
        if (n == 5)
        {
            if (sortString(s) == temp)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
 
        else
            cout << "NO\n";
    }
    return 0;
}