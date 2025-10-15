//week06-1.cpp
//學習計畫 242. Valid Anagram
//給你兩個字串 s t 判斷他們的字母是否相同(可換順序)
class Solution {
public:
    bool isAnagram(string s, string t) {
        //先看字串長度是否相同
        if( s.length() !=t.length() )return false; //不同就會直接失敗

        //先把字串 s 的字母累積一下
        int R[26] = {}; //要用一個Recyle回收桶 來分類我們的字母
        for(int i=0; i<s.length(); i++){
            char c = s[i] - 'a'; //本來是小寫字母 但要變成0-25所以要剪'a'
            R[c]++;
        }
        //再把剛剛累積的字母 看t用到那些 劃掉 剛好用完(不能用超過)
        for(int i=0; i<t.length(); i++){
            char c = t[i] - 'a';
            R[c]--; //用掉他
            if(R[c]<0) return false; //不夠用 就是失敗
       }
       return true; //都沒有失敗 就是成功
    }
};
