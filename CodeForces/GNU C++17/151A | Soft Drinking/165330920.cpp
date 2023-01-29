#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np, mill, lime, salt, result;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    mill = (k * l) / nl;
    lime = c * d;
    salt = p / np;
    result = min(mill, lime);
 
    cout << min(result, salt) / n;
    return 0;
}