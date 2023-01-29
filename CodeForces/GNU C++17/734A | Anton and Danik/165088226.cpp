#include <iostream>
using namespace std;
int main()
{
    int n , anton = 0, danik = 0;
    char s;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>s;
        if (s == 'A')
            anton++;
        else
            danik++;
    }
    if (anton > danik)
        cout<<"Anton";
    else if (danik > anton)
        cout<<"Danik";
    else
        cout<<"Friendship";
    return 0;
}