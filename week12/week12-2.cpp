///week12-2.cpp 學習計畫 Math 第3題
///LeetCode 860. Lemonade Change 找零錢

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int d5 = 0 ,d10 = 0,d20 = 0;  ///手上有多少錢
        for(int bill : bills){  ///C++進階迴圈
            if(bill==5) d5++; /// 拿到五元開心收下
            else if(bill==10){
                if(d5>0){
                    d10++; //拿到10元
                    d5--; ///還客人五元
                }else return false;  //沒有零錢慘了
            }else if (bill==20){  ///靠人手上拿20元大鈔
                if(d5>0 && d10>0){ ///剛好夠零錢
                    d20++;  ///開心收下20元
                    d10--; ///箱給客人10元鈔
                    d5--;  ///在給客人五玵
                }else if(d5>=3){  ///有3種5元可以找錢
                    d20++; /// 開心收下20
                    d5 -= 3;  // 再給客人3張五元
                }else return false;  /// 沒辦法找零
            }

        }
        return true;  ///成功找完零錢
    }
};
