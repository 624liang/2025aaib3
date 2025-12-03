///week13-3.cpp 學習計畫 Linked List 第三題
///LeetCode 2.add-two-numbers 把鏈結串列Linled List 裡面的數 逐項相加 小心進位

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode(999); ///故意放999代表奇怪的值
        ListNode* ans2 = ans; //會滑動的指標 把ans後面的Linled List 逐一處理好
        int carry = 0; //一開始 還沒有進位的的值 放0

        while(l1 != nullptr || l2 != nullptr){ ///只要有1個不是空指揮
            int now = carry;
            if(l1 != nullptr){ //處理右邊的list
                now += l1->val; //把值加進去
                l1 = l1->next; //換下一筆
            }
            if(l2 != nullptr){ //處理右邊的list
                now += l2 ->val; //把值加進去
                l2 = l2->next; //換下一筆
            }
             ans2 -> next = new ListNode(now%10);
             ans2 = ans2 -> next;
             carry = now / 10;
        }
        if(carry>0){
            ans2->next = new ListNode(carry);
        }
        return ans->next;
    }
};
