///week07-1b.cpp
///TAICA NTCY 陽交大期中考第6題
///INPUT: 1-9的數字 Output: 繞圈圈的方形
///ex. Input: 3
///3 3 3 3 3
///3 2 2 2 3
///3 2 1 2 3
///3 2 2 2 3
///3 3 3 3 3
///Input 2 有3層樓 , Input 3 有5層樓, Input 4 有7層樓, Input 5 有9層樓
#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int n;
    cin >> n; ///Step 1: Input

    for(int i=1; i<2*n; i++) { ///Step03: for迴圈 樓層
        for(int j=1; j<2*n; j++){ ///第幾格
            if(j>1) cout << " "; ///Step 05: 火車廂+車廂+車廂+車廂+車廂
            int d = max(abs(i-n), abs(j-n)); ///Step06: 找距離最大的值
            cout << d+1; ///cout <<n; ///先亂印數字n(將會拆掉)
        }
        ///cout << "現在是第i樓, i:" <<i; ///Step 4: 樓層鷹架
        cout <<endl; /// Step02: Output,跳行

    }
}
