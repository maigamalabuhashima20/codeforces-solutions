#include <iostream>
#include <deque>
using namespace std;
int main()
{
    int n, temp;
    deque<int> positive, negative, zero;
    cin >> n;
    while (n--)
    {
        cin >> temp;
        if (temp < 0)
            negative.push_back(temp);
        else if (temp > 0)
            positive.push_back(temp);
        else
            zero.push_back(temp);
    }
 
    if (negative.size() % 2 == 0)
    {
        zero.push_back(negative.at(negative.size() - 1));
        negative.erase(negative.begin() + negative.size() - 1);
    }
    if (positive.empty())
    {
        positive.push_back(negative.at(negative.size() - 1));
        positive.push_back(negative.at(negative.size() - 2));
        negative.erase(negative.begin() + negative.size() - 1);
        negative.erase(negative.begin() + negative.size() - 1);
    }
 
    cout << negative.size() << " ";
    for (int i = 0; i < negative.size(); i++)
        cout << negative.at(i) << " \n";
 
    cout << positive.size() << " ";
    for (int i = 0; i < positive.size(); i++)
        cout << positive.at(i) << " \n";
 
    cout << zero.size() << " ";
    for (int i = 0; i < zero.size(); i++)
        cout << zero.at(i) << " \n";
    return 0;
}