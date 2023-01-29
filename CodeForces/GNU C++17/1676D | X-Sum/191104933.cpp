#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        long long g[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cin >> g[i][j];
        }
        long long ans = 0;
        for (int r = 0; r < n; r++)
        {
            for (int c = 0; c < m; c++)
            {
                long long sum = 0;
 
                for (int i = 1; r - i >= 0 && c - i >= 0; i++)
                    sum += g[r - i][c - i];
 
                for (int i = 1; r + i < n && c + i < m; i++)
                    sum += g[r + i][c + i];
 
                for (int i = 1; r + i < n && c - i >= 0; i++)
                    sum += g[r + i][c - i];
 
                for (int i = 1; r - i >= 0 && c + i < m; i++)
                    sum += g[r - i][c + i];
 
                sum += g[r][c];
                ans = max(ans, sum);
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
                               