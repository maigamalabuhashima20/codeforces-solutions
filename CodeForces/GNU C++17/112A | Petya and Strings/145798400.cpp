#include <iostream>
using namespace std;
int main()
{
    string fn , sn;
    cin>>fn>>sn;
    for(int i = 0; i < fn.size(); i++)
    {
        fn[i] = toupper(fn[i]);
        sn[i] = toupper(sn[i]);
    }
    if(fn > sn)
    cout<<1;
    if(fn < sn)
    cout<<-1;
    if(fn == sn)
    cout<<0;
    return 0;
}