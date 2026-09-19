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
    void reorderList(ListNode* head) {
        ListNode*slow=head;
        int n=0;
         ListNode*fast=head;
        while(fast!=NULL&& fast->next!=NULL){
fast=fast->next->next;
slow=slow->next;

        }
        ListNode*curr=slow->next;
        slow->next=NULL;
ListNode*prev=NULL;
//  ListNode*currt=head;
     while(curr!=NULL){
            ListNode*nextnode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextnode;
        }

      ListNode*l1=head;
       ListNode*l2=prev;
       while(l2!=NULL){
        ListNode*temp1=l1->next;
         ListNode*temp2=l2->next;
         l1->next=l2;
         l2->next=temp1;
         l1=temp1;
         l2=temp2;

       }
 }
};
