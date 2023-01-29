#include<iostream>
#include<string>
using namespace std;
 
int main() {
    string hello = "hello";
    string word;
    cin >> word;
    int ind = 0;
    int count = 0;
    for (int i = 0; i < word.length(); i++) {
        if (word[i] == hello[ind]) {
            ind++;
            count++;
        }
    }
    if (count == 5) 
        cout << "YES";
    else 
        cout << "NO";
    return 0;
}