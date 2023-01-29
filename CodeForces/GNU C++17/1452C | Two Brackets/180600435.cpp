#include <iostream>
#include <deque>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int counter = 0;
        string str;
        cin >> str;
        deque<char> s;
        for (int i = 0; i < str.size(); i++)
        {
            if (s.empty() && (str[i] == '(' || str[i] == ')'))
                s.push_back(str[i]);
 
            else if (s.empty() && (str[i] == '[' || str[i] == ']'))
                s.push_front(str[i]);
 
            else
            {
                if (str[i] == ')' && s.back() == '(')
                {
                    s.pop_back();
                    counter++;
                }
                else if (str[i] == ']' && s.front() == '[')
                {
                    s.pop_front();
                    counter++;
                }
                else if (str[i] == '[')
                    s.push_front(str[i]);
                else if (str[i] == '(')
                    s.push_back(str[i]);
                else
                    continue;
            }
        }
        cout << counter << endl;
    }
    return 0;
}