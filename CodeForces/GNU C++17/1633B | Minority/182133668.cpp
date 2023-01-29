#include <iostream>
#define improve                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
 
using namespace std;
int main()
{
    improve;
    int n;
    cin >> n;
    while (n--)
    {
        int one = 0, zero = 0;
        string str;
        cin >> str;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '1')
                one++;
            else
                zero++;
        }
        if (one != zero)
            cout << min(zero, one) << endl;
        else
            cout << one - 1 << endl;
    }
    return 0;
}