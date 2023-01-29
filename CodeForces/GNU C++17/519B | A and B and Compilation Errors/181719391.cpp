#include <iostream>
#include <map>
#define improve                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
 
using namespace std;
int main()
{
    improve;
 
    int n, sum1 = 0, sum2 = 0, sum3 = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        sum1 += t;
    }
    for (int i = 0; i < n - 1; i++)
    {
        int t;
        cin >> t;
        sum2 += t;
    }
    cout << sum1 - sum2 << endl;
    for (int i = 0; i < n - 2; i++)
    {
        int t;
        cin >> t;
        sum3 += t;
    }
    cout << sum2 - sum3 << endl;
 
    return 0;
}