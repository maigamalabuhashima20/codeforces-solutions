#include <iostream>
#include <vector>
#include <stack>
using namespace std;
void init()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int main()
{
    string s;
    cin >> s;
    vector<int> vect(s.size(), 0);
    stack<int> st;
    int length = 0, count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        char c = s[i];
        if (c == '(')
        {
            st.push(i);
            continue;
        }
        if (st.empty())
            continue;
        int j = st.top();
        st.pop();
        if (j >= 1)
        {
            vect[i] = i - j + 1 + vect[j - 1];
        }
        else
        {
            vect[i] = i - j + 1;
        }
        if (vect[i] > length)
        {
            length = vect[i];
            count = 1;
        }
        else if (vect[i] == length)
            count++;
    }
    if (length == 0)
        cout << 0 << " " << 1;
    else
        cout << length << " " << count;
}