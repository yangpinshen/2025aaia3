// week14-3.cpp 學習計畫 Linked List
class Solution {
public:
    // 1. 反轉 Linked List 的函式 (week14-2.cpp 的內容)
    ListNode* myReverse(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return head;
        ListNode* ans = myReverse(head->next);
        head->next->next = head;
        head->next = nullptr;
        return ans;
    }

    // 2. 兩數相加的函式 (補上這段！這就是 LeetCode 2 的解法)
    ListNode* myAddTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(); // 虛擬頭節點，用來串接答案
        ListNode* curr = dummy;
        int carry = 0; // 進位值

        // 只要 l1 或 l2 還有節點，或是還有進位沒處理完，就繼續做
        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int val1 = (l1 != nullptr) ? l1->val : 0; // 取 l1 的值，沒有就是 0
            int val2 = (l2 != nullptr) ? l2->val : 0; // 取 l2 的值，沒有就是 0

            int sum = val1 + val2 + carry; // 當前位數總和
            carry = sum / 10;              // 計算新的進位 (例如 15 / 10 = 1)

            curr->next = new ListNode(sum % 10); // 建立新節點存個位數 (例如 15 % 10 = 5)
            curr = curr->next; // 往下移動

            // 如果原本的 list 還有東西，就往後移
            if (l1 != nullptr) l1 = l1->next;
            if (l2 != nullptr) l2 = l2->next;
        }

        return dummy->next; // 回傳虛擬頭的下一個，才是真正的答案頭
    }

    // 3. 主函式 (week14-3.cpp 的內容)
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* list1 = myReverse(l1); // 把輸入轉成個位數在頭
        ListNode* list2 = myReverse(l2);

        ListNode* ans = myAddTwoNumbers(list1, list2); // 進行相加

        return myReverse(ans); // 最後把答案轉回來 (變成高位數在頭)
    }
};
