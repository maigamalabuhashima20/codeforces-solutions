#include <iostream>
using namespace std;
int main()
{
    int n, m, z, counter = 0;
    cin >> n >> m >> z;
    for (int i = m; i <= z; i += m)
        for (int j = n; j <= i; j += n)
            if (i == j)
                counter++;
    cout << counter;
    return 0;
}