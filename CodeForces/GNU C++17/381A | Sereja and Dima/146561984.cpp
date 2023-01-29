#include <iostream>
using namespace std;
int main()
{
    int n , s = 0 , sscore = 0, dscore = 0;
    cin>>n;
    int arr[n] , e = n-1;
    for(int i = 0; i < n; i++)
        cin>>arr[i];
    for(int i = 0; i < n; i++)
    {
        if(i % 2 == 0)
        {
            if(arr[e] > arr[s])
            {
                sscore += arr[e];
                --e;
            }
            else
            {
                sscore += arr[s];
                ++s;
            }
 
        }
        else
        {
            if(arr[e] > arr[s])
                {
                    dscore += arr[e];
                    --e;
                }
                else
                {
                    dscore += arr[s];
                    ++s;
                }
        }
        
    }
    cout<<sscore<<" "<<dscore;
    return 0;
}