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
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr || head->next==nullptr){
            return head;
        }
        ListNode *newHead=head->next;
        ListNode *curr=head;
        ListNode *prev=nullptr;
        while(curr!=nullptr && curr->next!=nullptr){
            ListNode *NEXT=curr->next;
            curr->next=NEXT->next;
            NEXT->next=curr;
            if(prev!=nullptr){
                prev->next=NEXT;
            }
            prev=curr;
            curr=curr->next;
        }
        return newHead;
    }
};