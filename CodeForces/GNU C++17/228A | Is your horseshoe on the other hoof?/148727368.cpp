#include <iostream>
using namespace std;
int main()
{
    long long s1 , s2, s3, s4;
    cin>>s1>>s2>>s3>>s4;
    int counter = 0;
    if (s1 == s2 || s1 == s3 || s1 == s4)
        counter++;
    if (s2 == s3 || s2 == s4)
        counter++;
    if (s3 == s4)
        counter++;
    cout<<counter;
    return 0;
}