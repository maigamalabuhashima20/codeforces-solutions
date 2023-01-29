#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> data;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        data.push_back(temp);
    }
    sort(data.begin(), data.end());
 
    for (int i = 0; i < n; i++)
    {
        cout << data[i] << " ";
    }
    cout << endl;
}