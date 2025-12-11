// week14-1.cpp 學習計畫 Linked List
// LeetCode 206. Reverse Linked List
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector<int> a; // 伸縮自如的陣列, 把值存起來
        while (head != nullptr) {
            a.push_back( head->val );
            head = head->next;
        }

        ListNode* ans = new ListNode(999); // 隨便放的
        ListNode* ans2 = ans; // 其實把 ans 的尾巴「記下來」
        // 倒過來的迴圈, 再把它送到 ans 尾巴的答案
        for (int i=a.size()-1; i>=0; i--) { // 倒過來的迴圈
            ans2->next = new ListNode( a[i] ); // 下一筆
            ans2 = ans2->next; // 到下一筆, 繼續「接」
        }
        return ans->next; // 這裡一點點難!!!!
    }
};
