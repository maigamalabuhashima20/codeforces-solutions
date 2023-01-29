#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    long long p, a, b, c, ans;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> p >> a >> b >> c;
        if (p % a == 0 || p % b == 0 || p % c == 0)
        {
            cout << 0 << "\n";
        }
        else
        {
            ans = min({a - p % a, b - p % b, c - p % c});
            cout << ans << "\n";
        }
    }
    return 0;
}