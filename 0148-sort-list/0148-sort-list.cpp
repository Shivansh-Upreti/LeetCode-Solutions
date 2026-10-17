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
    ListNode* sortList(ListNode* head) {
        if (head==nullptr || head->next==nullptr) {
            return head;
        }

        ListNode* slow=head;
        ListNode* fast=head->next; 
        while (fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }

        ListNode* mid=slow->next; 
        slow->next=nullptr;       

        ListNode* left=sortList(head);
        ListNode* right=sortList(mid);

        return merge(left,right);
    }

private:
    ListNode* merge(ListNode* list1, ListNode* list2) {
        ListNode dummy(0); 
        ListNode* tail=&dummy;

        while (list1!=nullptr&&list2!=nullptr) {
            if (list1->val < list2->val) {
                tail->next=list1;
                list1=list1->next;
            } else {
                tail->next=list2;
                list2=list2->next;
            }
            tail=tail->next;
        }

        if (list1!=nullptr) {
            tail->next=list1;
        } else {
            tail->next=list2;
        }
        return dummy.next;
    }
};