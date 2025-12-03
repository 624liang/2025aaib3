///week10-1.cpp 學習計劃
///LeetCode 1572. Matrix Diagonal Sum
///有兩條對角線 左上右下 （i==j) 另一條右上左下（相加==N-1)

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int ans = 0;
        int N = mat.size();
        for(int i=0; i<N;i++){
            for(int j=0;j<N;j++){
                if(i==j || i+j==N-1) ans += mat[i][j];
            }
        }
        return ans;

    }
};
