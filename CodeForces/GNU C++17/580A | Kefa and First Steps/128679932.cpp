#include <iostream>
using namespace std;
int main()
{
    int days, counter = 1 , maxcount = 1;
    cin>>days;
    int money[days];
    for (int i = 0; i < days; i++)
    {
        cin>>money[i];
    }
    for (int i = 0; i < days - 1; i++)
    {
 
        if(money[i+1] >= money[i])
        {
            counter++;
            maxcount = max(maxcount , counter);
        }
 
        else
        {
            counter = 1;
        }
    }
 
    cout << maxcount <<endl;
    return 0;
}