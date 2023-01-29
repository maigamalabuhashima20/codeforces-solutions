#include <iostream>
using namespace std;
int main()
{
    int n, d;
    bool islucky = false;
    cin >> n;
    // while (n >= 0)
    // {
    //     d = n % 10;
    //     if (d == 7 || d == 4)
    //         islucky = true;
    //     else
    //     {
    //         islucky = false;
    //         break;
    //     }
 
    //     n /= 10;
    // }
    if (n % 4 == 0 || n % 7 == 0 || n % 47 == 0 || n % 74 == 0 || n % 77 == 0 || n % 44 == 0 || n % 447 == 0 || n % 477 == 0 || n % 474 == 0 || n % 444 == 0 || n % 777 == 0 || n % 774 == 0 || n % 747 == 0 || n % 744 == 0)
        cout << "YES";
    else
        cout << "NO";
 
    return 0;
}