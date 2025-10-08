///week05-1.cpp
///LeetCode 學習計畫 Built-In Functions 58. Length of Last Wordn
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s); //把字串 string 當 iostream 的 cin 來用
        string word; //字串
        //ss >> word; //像是 cin >> word 一樣,現在的 ss 可以用 ss >> word
        //ss >> word; //讀第2次 就會讀到第2個
        while(ss >> word){ //一直讀 讀到不能讀為止
            //裡面什麼都沒有
        }
        cout << word; //先做一個實驗,看讀到誰

        return word.length(); //最後把長度送出去
    }
};
