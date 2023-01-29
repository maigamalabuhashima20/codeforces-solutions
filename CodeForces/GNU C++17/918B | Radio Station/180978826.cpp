#include <iostream>
#include <algorithm>
#include <vector>
#define improve                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0);
 
using namespace std;
int main()
{
    improve;
    int n, m;
    vector<pair<string, string>> vn;
    vector<pair<string, string>>::iterator itn;
    vector<pair<string, string>> vm;
    vector<pair<string, string>>::iterator itm;
    cin >> n >> m;
    while (n--)
    {
        string str1, str2;
        cin >> str1 >> str2;
        vn.push_back({str1, str2});
    }
    while (m--)
    {
        string str1, str2;
        cin >> str1 >> str2;
        str2.erase(str2.size() - 1, 1);
 
        vm.push_back({str1, str2});
    }
    for (itm = vm.begin(); itm != vm.end(); itm++)
    {
        for (itn = vn.begin(); itn != vn.end(); itn++)
        {
            if ((*itm).second == (*itn).second)
                cout << (*itm).first << " " << (*itm).second << "; #" << (*itn).first << endl;
        }
    }
 
    return 0;
}