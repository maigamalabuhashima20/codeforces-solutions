#include <iostream>
using namespace std;
int main()
{
    short n, result = 0;
    cin>>n;
    short home[n] , guest[n];
    for(int i = 0; i < n ; i++)
        cin>>home[i]>>guest[i];
    for(int i = 0; i < n ; i++)
    {
        for(int j = 0; j < n ; j++)
        {
            if(home[i] == guest[j])
                result++;
        }
    }
    cout<<result;
    return 0;
}