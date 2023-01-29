#include <iostream>
using namespace std;
int main()
{
    short n, ni, count1 = 0, count0 = 0, result = -1;
    cin >> n;
    while (n--)
    {
        cin >> ni;
        if (ni == 1)
        {
            count1++;
            if (count0 > 0)
                count0--;
        }
        else
        {
            count0++;
            if (count0 > result)
                result = count0;
        }
    }
    cout << count1 + result;
    return 0;
}