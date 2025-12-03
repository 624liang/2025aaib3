///week10-3.cpp 學習計劃 Matrix 第三題（上週AI寫過）
///LeetCode 54. Spiral Matrix
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M=matrix.size(), N=matrix[0].size();
        int top=0, bottom=M-1, left=0, right=N-1; //我們的
        vector<int> ans;
        while(top<=bottom && left<=right){ ///還在範圍有機會
            for(int j=left;j<=right;j++) ans.push_back(matrix[top][j]);
            top++; ///邊界往下

            for(int i=top;i<=bottom ;i++) ans.push_back(matrix[i][right]);
            right--; ///邊界往左收
            if( !(top<=bottom && left<=right)) break; ///不在範圍就要離開

            for(int j=right; j>=left;j--) ans.push_back(matrix[bottom][j]);
            bottom--;

            for(int i=bottom; i>=top; i--) ans.push_back(matrix[i][left]);
            left++;
        }
        return ans;

    }
};
