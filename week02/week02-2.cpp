///week02-2.cpp C++
/// 要用 C++ 的字串 反過來
#include <iostream> /// IO串流外掛
#include <string> ///字串外掛
using namespace std; ///使用命名空間 std
int main()
{
    cout << "請輸入數字: ";
    string a, ans;
    cin >> a;
    /// 倒過來的迴圈 字串的長度較 a.length()
    for(int i=a.length()-1; i>=0; i--){
        ans += a[i]; /// 把字母倒過來,放入答案
        }
        cout << a << ans;
}
