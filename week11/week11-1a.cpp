//week11-1a.cpp 二合一 先笨方法
//LeetCode 2154. Keep Multiplying Found Values by Two
//每次乘以兩倍 把沒有出現的數字return出來
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        ///用while迴圈一職做
        while(1){
            int found = 0; //一開始沒找到
            for(int i=0;i<nums.size();i++){///original 有沒有在nums裡面
                if(nums[i] == original) found = 1; //找到了
            }
            if(found==0) break; // 失敗 離開迴圈
            else original = original * 2; //有找到繼續 *兩倍
        }
        return original;
        }
};
