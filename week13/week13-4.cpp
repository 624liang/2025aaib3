// week13-4.cpp 聖誕節倒數寫程式 Advent of Code 2025
// 第1題 --- Day 1: Secret Entrance --- 神祕的入口
// 我們利用 LeetCode 的 Playground 我的遊戲場 可以寫程式 (右下角放 stdin 輸入)
// LeetCode 會幫我們 #include 全部的東西，所以前面什麼都不用寫

int main() {
    char c;  // 每一行，有一個英文
    int d;   // 有一個數字
    int now = 50; // 現在的刻度是在 50
    int ans = 0;  // 刻度是「指到幾次」
    while ( cin >> c >> d ) {
        //if (c=='L') cout << "往左轉" << d << "格\n";
        //if (c=='R') cout << "往右轉" << d << "格\n";

        if (c=='L') now -= d; // 往左轉，減掉它
        if (c=='R') now += d; // 往右轉，加上它

        now = (now % 100 + 100) % 100; // 取餘數 + 100 再取餘數，得到 0-99 間
        if (now==0) ans++;  // 刻度是「指到幾次」
        //cout << "現在到達格子刻度" << now << "\n";
    }
    cout << "答案是:" << ans; // 每個人，會有自己的答案
}
