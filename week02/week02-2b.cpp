// week02-2b.cpp
// SOIT106_ADVANCE_001 C++ string
#include <iostream>
#include <string> /
using namespace std;
int main()
{
    string a, ans;
    cin >> a;

    for(int i=a.length()-1; i>=0; i--){
        ans += a[i];
        }
        cout << a << '+' << ans << "=";
        cout << stoi(a) + stoi(ans) << endl;
} // scoi() is C++11 (2011)
