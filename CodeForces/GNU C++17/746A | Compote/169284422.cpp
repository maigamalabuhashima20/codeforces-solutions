#include <iostream>
using namespace std;
int main()
{
    short a, b, c, count = 0;
    cin >> a >> b >> c;
    while (a >= 1 && b >= 2 && c >= 4)
    {
 
        count += 7;
        a = a - 1;
        b = b - 2;
        c = c - 4;
    }
    cout << count;
    return 0;
}