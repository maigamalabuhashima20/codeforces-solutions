#include <iostream>
#include <map>
#include <vector>
 
#define improve                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
 
using namespace std;
int main()
{
    improve;
    int app, event, sum = 0, time = 0, maxi = 0;
    cin >> app >> event;
    vector<int> v;
    map<int, int> mp, mpremove;
    while (event--)
    {
        int type, app;
        cin >> type >> app;
        if (type == 1)
        {
            sum++;
            v.push_back(app);
            mp[app]++;
            time++;
        }
        else if (type == 2)
        {
            sum -= mp[app];
            mp[app] = 0;
            mpremove[app] = time;
        }
        else
        {
            for (int i = maxi; i < app; ++i)
            {
                if (mp[v[i]] > 0 && mpremove[v[i]] <= i)
                {
                    sum--;
                    mp[v[i]]--;
                }
            }
            maxi = max(maxi, app);
        }
        cout << sum << endl;
    }
    return 0;
}