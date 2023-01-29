#include <iostream>
using namespace std;
int main()
{
    char s[4][4];
    int counter, i, j;
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
           cin>>s[i][j];
        }
    }
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            counter = (s[i][j] == '#'? 1 : 0) + (s[i + 1][j] == '#'? 1 : 0) + (s[i][j + 1] == '#'? 1 : 0) + (s[i + 1][j + 1] == '#'? 1 : 0);
            if(counter != 2)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}