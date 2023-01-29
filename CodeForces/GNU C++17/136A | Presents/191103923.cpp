#include <iostream>
using namespace std;
int main()
{
    int arr[5000];
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int ind;
        cin >> ind;
        arr[ind] = i;
    }
    for (int i = 1; i <= n; i++)
        cout << arr[i] << " ";
}