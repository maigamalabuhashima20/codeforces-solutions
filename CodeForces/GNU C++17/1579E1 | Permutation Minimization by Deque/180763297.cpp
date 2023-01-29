#include <iostream>
#include <deque>
using namespace std;
int main()
{
    int t;
 
    cin >> t;
    while (t--)
    {
        int s;
        cin >> s;
        deque<int> d;
        for (int i = 0; i < s; i++)
        {
            int p;
            cin >> p;
            if (i == 0)
                d.push_back(p);
            else
            {
                if (p <= d.front())
                    d.push_front(p);
                else
                    d.push_back(p);
            }
        }
        for (int i = 0; i < s; i++)
        {
            cout << d[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}