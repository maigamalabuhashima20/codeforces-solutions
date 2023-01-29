#include <iostream>
using  namespace std;
int main()
{
    int n , issue = 0;
    cin>>n;
    short arr[n], police = 0;
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(arr[i] == -1)
        {
            if(police == 0)
                issue++;
            else
                police--;
        }
        else
           police += arr[i]; 
    }
    cout<<issue;
    return 0;
}