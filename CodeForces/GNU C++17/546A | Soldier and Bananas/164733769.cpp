#include <iostream>
using namespace std;
int main()
{
    short k, w;
    long long n, result = 0;
    cin >> k >> n >> w;
    for (int i = 1; i <= w; i++)
        result += i * k;
    if (result > n)
        cout << result - n;
    else
        cout << 0;
    return 0;
}