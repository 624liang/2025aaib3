///week13-2b.cpp 學習計畫 Linkrd List 第一題
///中間練習的程式 練習new ListNode(999)
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
        ListNode* ans = new ListNode(999); ///不管題目 一律給999
        ListNode* ans2 = new ListNode(888); ///不管題目 一律給888
        ans->next = ans2; ///接起來
        return ans; ///這個程式 可以打node 999 的下一個 888

    }
};
