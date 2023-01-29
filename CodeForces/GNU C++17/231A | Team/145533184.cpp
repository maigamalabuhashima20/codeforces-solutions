#include <iostream>
using namespace std;
int main()
{
 short n, p1, p2, p3, result = 0;
 cin >> n;
 for (int i = 0; i < n; i++)
 {
  short sum = 0;
  cin >> p1 >> p2 >> p3;
  sum = p1 + p2 + p3;
  if (sum >= 2)
   result += 1;
 }
cout << result << "\n";
return 0;
}