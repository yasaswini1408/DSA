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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head==NULL|| head->next==NULL || k == 0) return head;
        ListNode* temp=head;
        ListNode* prev=NULL;
        ListNode* node=head;
        int n=1;
        while(temp->next!=NULL){
            n++;
            temp=temp->next;
        }
        k=k%n;
        if(k==0) return head;
        temp->next=head;
        int s=n-k;
        while(s>0){
            prev=node;
            node=node->next;
            s--;
        }
        prev->next=NULL;
        return node;

    }
};