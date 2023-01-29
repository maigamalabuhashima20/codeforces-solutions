#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string n;
    short counter = 0;
    cin >> n;
    sort(n.begin(), n.end());
    for (int i = 0; i < n.size(); i++)
    {
        if (n[i] != n[i + 1])
            counter++;
    }
    if (counter % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
        
    return 0;
}