#include <iostream>
using namespace std;
int main()
{
    short a1, a2, a3, b1, b2, b3, n, sum1 = 0, sum2 = 0, shelves = 0;
    cin >> a1 >> a2 >> a3;
    cin >> b1 >> b2 >> b3;
    cin >> n;
    sum1 = a1 + a2 + a3;
    sum2 = b1 + b2 + b3;
    while (sum1 > 0)
    {
        sum1 -= 5;
        shelves++;
    }
    while (sum2 > 0)
    {
        sum2 -= 10;
        shelves++;
    }
    if (shelves <= n)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}