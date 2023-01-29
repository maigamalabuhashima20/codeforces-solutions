#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
 int test;
 cin >> test;
 while (test--)
 {
  int n;
  cin >> n;
  vector<int> data;
  for (int i = 0; i < n; i++)
  {
   int temp;
   cin >> temp;
   data.push_back(temp);
  }
 
  sort(data.begin(), data.end());
  vector<int> res;
  for (int i = 0; i < n-2; i++)
  {
   if (data[i] == data[i + 1] && data[i + 1] == data[i + 2])
    res.push_back(0);
   else if (data[i] == data[i + 1])
    res.push_back(abs(data[i + 1] - data[i + 2]));
   else if (data[i + 1] == data[i + 2])
    res.push_back(abs(data[i] - data[i + 1]));
   else
    res.push_back(((data[i + 1] - data[i]) + (data[i + 2] - data[i + 1])));
  }
 
  sort(res.begin(), res.end());
  cout << res[0] << endl;
  
 }
}