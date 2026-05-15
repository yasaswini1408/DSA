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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast = head;
        ListNode* prev = NULL;
        int k = 0;
        ListNode* temp = head;
        while(temp != NULL) {
            k++;
            temp = temp->next;
        }
        if(k == n) return head->next;
        int move = k - n;
        while(move--) {
            prev = fast;
            fast = fast->next;
        }
        prev->next = fast->next;
        return head;
    }
};