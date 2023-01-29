#include <iostream>
using namespace std;
int main()
{
    int n , h, ai , wb = 0;
    cin>>n>>h;
    for (int i = 0; i < n; i++)
    {
        cin>>ai;
    
    if (ai > h){
        wb+= 2;
    }
    else 
    {
        wb += 1;
    }
    
    }
    cout<<wb<<endl;
    
    
    return 0;
}