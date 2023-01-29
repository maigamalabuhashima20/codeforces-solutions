#include <iostream>
using namespace std;
int main()
{
    int a,b,counter = 0;
    cin>>a>>b;
    do
    {
    a *= 3;
    b *= 2;
    counter++;
    }
    while (a <= b);
    cout<< counter<<endl;
    return 0;
}