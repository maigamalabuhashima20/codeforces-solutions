#include <iostream>
using namespace std;
int main()
{
    int n , w;
    cin >>n;
    int ai[n];
    for(int i = 0; i < n; i++)
    {
        cin>>ai[i];
    }
    cin>>w;
    for(int i = 0; i < w ; i++)
    {
        int wx, wy;
        cin>>wx>>wy;
        --wx;
        if(wx != 0)
        {
            ai[wx-1]+= wy - 1;
        }
        if(wx != n)
        {
           ai[wx + 1] += ai[wx] - wy;
        }
        ai[wx] = 0;
    }
    for(int i = 0; i < n; i++)
    {
        cout<<ai[i]<<endl;
    }
 
 
    return 0;
}