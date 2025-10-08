///week03-5.cpp
///leetcode 學系計畫 week9 1502. Can Make Arithmetic Progression From Sequence
///數字由小到大 是不是相鄰都差一個數字
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end()); /// 把陣列小到大排好
        int d = arr[1] - arr[0]; /// 兩數差d
        for(int i=1;i<arr.size(); i++){ ///迴圈從一開始 因為要找前一項
            if(arr[i] - arr[i-1] != d) return false;
        } ///如果後項-前項 不是d的話
        return true;
    }
};
