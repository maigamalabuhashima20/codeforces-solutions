#include <iostream>
using namespace std;
int main()
{
    int n, x, even = 0, isodd = 0, iseven = 0;
    cin >> n;
 
    for (int i = 1; i <= n; ++i)
    {
        cin >> x;
        if (x % 2 == 0)
        {
            even += 1;
            iseven = i;
        }
        else
        {
            even -= 1;
            isodd = i;
        }
    }
 
    cout << (even > 0 ? isodd : iseven) << endl;
 
    return 0;
}