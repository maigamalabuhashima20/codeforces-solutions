#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int u = 0 , l = 0;
    for(int i = 0; i < s.length() ; i++)
    {
        if (isupper(s[i]))
            u++;
        else
            l++;
    }
    if (u > l)
    {
        for(int i = 0; i < s.length() ; i++)
            s[i] = toupper(s[i]);
        cout<<s;
    }
    else
    {
    for(int i = 0; i < s.length() ; i++)
        s[i] = tolower(s[i]);
    cout<<s;
    }
    
    return 0;
}