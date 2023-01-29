#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int>v(101);
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        v[input]++;
    }
    cout << *max_element(v.begin(), v.end());
    return 0;
}