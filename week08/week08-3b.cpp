///week08-3b.cpp
///1275. Find Winner on a Tic Tac Toe Game
//看起來3*3 陣列
class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3] = {}; /// 有大括號會給0
        int now = 1;
        int winner = 0; ///1:玩家A 第一個玩家 2:玩家B 第二個玩家
        for(vector<int> move : moves){
            int i = move[0] , j = move[1];
            a[i][j] = now; //玩家A 第一個玩家
            ///myPrint(a); /// 先陳列印出來 小幫手
            if(a[i][0]==now && a[i][1]==now && a[i][2]==now) winner = now; //判斷誰勝
            if(a[0][j]==now && a[1][j]==now && a[2][j]==now) winner = now;
            if(a[0][0]==now && a[1][1]==now && a[2][2]==now) winner = now;
            if(a[0][2]==now && a[1][1]==now && a[2][0]==now) winner = now;
            if(now==1) now = 2; ///A下完換B下
            else now = 1; ///B下完換B下
        }
        if(winner==1) return "A"; ///有 winner 是 1
        else if(winner==2) return "B"; // 有winner 是2
        else if(moves.size()==9) return "Draw"; ///平手
        else return "Pending";///陷阱還沒下完 樣等Pending
    }
};
