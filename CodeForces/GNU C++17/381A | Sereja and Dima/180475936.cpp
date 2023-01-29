#include <iostream>
#include <deque>
using namespace std;
int main()
{
 
    int n, seraja = 0, dima = 0;
    cin >> n;
    deque<int> d(n);
    for (int i = 0; i < n; i++)
    {
        cin >> d[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            if (d.front() > d.back())
            {
                seraja += d.front();
                d.pop_front();
            }
 
            else
            {
                seraja += d.back();
                d.pop_back();
            }
        }
        else
        {
            if (d.front() > d.back())
            {
                dima += d.front();
                d.pop_front();
            }
 
            else
            {
                dima += d.back();
                d.pop_back();
            }
        }
    }
    cout << seraja << " " << dima;
    return 0;
}