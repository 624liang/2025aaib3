// week02-4.cpp LeetCode 學習計畫第2題
// 389. Find the Difference 找到第2個字串,差哪個字母
class Solution {
public:
    char findTheDifference(string s, string t) {
        int A[256] = {}; // 可以用橘子來裝字母, 大括號, 代表 一開始是空的
        for(int i=0; i<s.length(); i++){
            char c = s[i]; // 取出字母
            A[c]++; // 把字母,放入桶子裡
        }
        for(int i=0; i<t.length(); i++){
            char c = t[i]; // 取出字母
            A[c]--; // 從桶子裡拿出字母
            if(A[c] < 0) return c; // 拿光光 變負的,代表不夠用,缺它
        }
        return 0; //不會用到這一行
    }
};
