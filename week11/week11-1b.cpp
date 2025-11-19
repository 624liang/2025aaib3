//week11-1b.cpp 二合一 聰明的方法 用HashMap or HashSet
//LeetCode 2154. Keep Multiplying Found Values by Two
//每次乘以兩倍 把沒有出現的數字return出來
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        set<int> numsSet; // HashSet 可以快速找到 有沒有這個數
        for(int num : nums)numsSet.insert(num); ///C++的進階迴圈
        ///請問original 有沒有找到 numsSet 裡面? 有的話繼續做
        while ( numsSet.find(original) != numsSet.end()){
            original = original * 2;
        }
        return original;
    }
};
