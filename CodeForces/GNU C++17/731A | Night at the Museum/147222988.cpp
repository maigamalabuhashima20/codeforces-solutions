#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    string n;
    int move = 0 , start = 97;
    cin>>n;
    for(int i = 0; i < n.size(); i++)
    {
        int result = abs((int)n[i] - start);
        if (result <= 13)
            move+= result;
        else
            move += 26 - result;
        start = (int)n[i];
    }
    cout<<move;
    return 0;
}