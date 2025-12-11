// week14-1.cpp 學習計畫 Linked List 第2題
// LeetCode 206. Reverse Linked List
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // 終止條件：如果是空串列，或只剩一個節點，就不用反轉了，直接回傳
        if (head == nullptr || head->next == nullptr) return head;

        // 5行搞定「函式呼叫函式」
        // 先遞迴跑到最後面，把最後一個節點 (新的頭) 抓出來 (ans)
        ListNode* ans = reverseList(head->next);

        // 重點邏輯：反轉指標
        // head->next 是原本的下一個節點
        // head->next->next = head 表示讓「下一個節點」的「下一個」指向「自己」
        head->next->next = head; // 現在的下一筆，的下一筆，變指向自己

        // 收尾：斷開原本指向下一筆的連結，避免形成無窮迴圈
        head->next = nullptr;

        return ans; // 回傳新的頭 (也就是原本 List 的最後一個節點)
    }
};
