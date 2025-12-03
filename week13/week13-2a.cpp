///week13-2a.cpp 學習計畫 Linkrd List 第一題
///LeetCode 21. Merge Two Sorted Lists
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        //ListNode* ans = ListNode(); ///錯誤的寫法 少了new
        ListNode* ans = new ListNode(); ///正確寫法 要有一個new給指標
        ListNode* now = ans; //現在處理的位置是ans的分身
        while(list1 != nullptr && list2 != nullptr){  ///兩邊都不是空的 才能比大小! 如果有東西可以家的話
            if(list1 -> val <= list2 -> val){ //比大小 左邊小 那就'ˋ左邊
                now->next = list1;
                list1 = list1->next;
                now = now->next;
            }else{ //右邊小要放右邊的list2
                now->next = list2;
                list2 = list2->next; //用完了換下一筆
                now = now->next; // 分身 要處理下一筆
            }
        }
        ///收尾啦
        if(list1 != nullptr) now->next = list1;
        if(list2 != nullptr) now->next = list2;
        return ans-> next;

    }
};
