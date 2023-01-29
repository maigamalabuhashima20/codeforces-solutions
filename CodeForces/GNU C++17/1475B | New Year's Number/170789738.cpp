#include <iostream>
using namespace std;
int main()
{
    int t, n, s;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n >= 2020)
        {
            s = n % 2020;
            n /= 2020;
            if (s <= n)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else
            cout << "NO\n";
    }
    return 0;
}