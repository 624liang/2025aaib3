/// week01-4b.cpp �ϥ� C++ �g
#include <iostream> ///�ϥ� C++ �~��
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b; /// C++ Ū���
    int ans = 0;
    for(int i=a; i<=b; i++){
        if( i%3==0 ) ans += i;
    }
    cout <<ans; /// C++ �L���
}
