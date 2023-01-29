#include <iostream>
using namespace std;
int main()
{
    int n, t, k, d, l, s;
    cin>>n>>t>>k>>d;
    l = n / k + (n % k != 0);
    s = t * l;
    if((t + d) < s)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}