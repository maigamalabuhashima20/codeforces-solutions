#include <iostream>
using namespace std;
int main()
{
    short t, n, m, k;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> m >> k;
        if ((n * m - 1) == k)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}