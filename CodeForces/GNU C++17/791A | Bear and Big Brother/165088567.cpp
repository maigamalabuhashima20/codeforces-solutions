#include <iostream>
using namespace std;
int main()
{
    short a,b,counter = 0;
    cin>>a>>b;
    while (a <= b)
    {
    a *= 3;
    b *= 2;
    counter++;
    }
    cout<< counter;
    return 0;
}