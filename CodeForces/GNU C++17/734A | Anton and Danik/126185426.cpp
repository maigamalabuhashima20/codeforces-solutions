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
        {
            anton++;
        }
        else
        {
            danik++;
        }
    }
    if (anton > danik)
    {
        cout<<"Anton"<<endl;
    }
    else if (danik > anton)
    {
    cout<<"Danik"<<endl;
    }
    else
    {
        cout<<"Friendship"<<endl;
    }
    return 0;
}