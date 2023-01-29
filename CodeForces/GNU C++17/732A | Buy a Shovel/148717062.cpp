#include <iostream>
using namespace std;
int main()
{
    short k  , r , counter = 0 , price = 0;
    cin>>k>>r;
    for(int i = 1; i <= 1000 ; i++)
    {
        price = i * k;
        if (price % 10 == r || price % 10 == 0 )
        {
            counter++;
            break;
        }
        else
        counter++;
    }
    cout<<counter;
    return 0;
}