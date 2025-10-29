///week07-3.cpp
///LeeCCode 學習計畫 682. Baseball Game
///
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a; /// Part04: 要把資料放到陣列a裡面
        for(string op : operations){ ///Part01: C++進階迴圈
            cout << "現在讀到了:  " << "\n"; ///Part 02: 看他是誰等一下刪掉
            ///Part03: 一堆if判斷要怎麼模擬
            if(op[0]=='C'){ ///清掉最後一位
                a.pop_back(); /// 丟掉最後一個
            }else if(op[0]=='D'){ //最後一位 變2倍 在家到最後面
                a.push_back(a.back()*2); //乘兩倍 Part06: back()
            }else if(op[0]=='+'){ //還不知道 等一下再看
                int temp = a.back(); ///先超最後一台車的車牌
                a.pop_back(); ///把最後一台車開走
                int temp2 = a.back(); //可以抄倒數第二台車的車牌
                a.push_back(temp); /// 把剛剛車停回來
                a.push_back( temp + temp2); ///把最後兩個加起來 再加到最後面
            }else { ///字母的字串 要加到最後面
                a.push_back( stoi(op)); /// Part04: .push_back()
            }
        }
        int ans = 0;
        for(int now : a){ /// Part05: C++進階迴圈 要看陣列裡的值
           ans += now; ///cout << now << " "; ///Part02: 看他差誰 等一下刪掉(看陣列裡面)
        }
        return ans; ///return 0; ///先隨便return鞛一下再寫真的答案
    }
};
