#include <iostream>
#include <set>
#define improve                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
 
using namespace std;
int main()
{
    improve;
    int n = 0;
    cin >> n;
    while (n--)
    {
        int t, size;
        cin >> t;
        size = t;
        set<int> st;
        while (t--)
        {
            int x;
            cin >> x;
            st.insert(x);
        }
        if (st.size() != size)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}