#include <iostream>
using  namespace std;
int main()
{
    int n , police = 0, issue = 0;
    cin>>n;
    int arr[n];
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