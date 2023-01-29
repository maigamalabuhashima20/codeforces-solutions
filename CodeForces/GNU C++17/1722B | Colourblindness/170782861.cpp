#include <iostream>
using namespace std;
int main()
{
    short t, n;
    bool flag = true;
    string s1, s2;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        cin >> s1 >> s2;
        for (int j = 0; j < n; j++)
        {
            if ((s1[j] == 'G' && s2[j] == 'B') || (s1[j] == 'B' && s2[j] == 'G') || (s1[j] == s2[j]))
                flag = true;
            else
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}