#include<iostream>
#include<string>
#include <vector>
using namespace std;
 
int main() {
 
    string str; 
    cin>> str;
    vector<char> data;
    for (int i = 0; i < str.size(); i++) {
        if (!data.empty() && data.back() == str[i])
        { 
            data.pop_back(); 
        }
        else { 
            data.push_back(str[i]); 
        }
    }
 
    if (data.empty())
        cout << "Yes" << endl;
    else
        cout<< "No" << endl;
 
    return 0;
}