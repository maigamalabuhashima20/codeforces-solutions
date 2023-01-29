#include <iostream>
#include <cmath>
using namespace std;
int main()
{
 long long n, m, a;
 cin >> n >> m >> a;
 long long x, y;
 x = ceil((double)n / a);
 y = ceil((double)m / a);
 cout << x * y << endl;
 
 return 0;
}