#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string str;
    while (n--)
    {
        cin >> str;
        if (str.size() % 2 != 0 || str[0] == ')' || str[str.size() - 1] == '(')
            cout << "NO\n";
        else
           cout << "YES\n";
    }
    return 0;
}