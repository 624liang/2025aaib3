///week10-2b.cpp 學習計劃Math的第一題（用數學方法寫）
///LeetCode 1523. Count Odd Numbers in an Interval Range
class Solution {
public:
    int countOdds(int low, int high) {
        int ans = (high-low) / 2 ; ///大約有一半是奇數
        if(low%2==1 || high%2==1) ans++; ///有多一個基數 ＋＋
        return ans;
    }
};
