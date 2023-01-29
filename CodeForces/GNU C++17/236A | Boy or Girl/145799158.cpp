#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string n;
    int counter = 0;
    cin >> n;
    sort(n.begin(), n.end());
    for (int i = 0; i < n.size(); i++)
    {
        if (n[i] != n[i + 1])
            counter++;
    }
    if (counter % 2 != 0)
        cout << "IGNORE HIM!";
    else
        cout << "CHAT WITH HER!";
    return 0;
}