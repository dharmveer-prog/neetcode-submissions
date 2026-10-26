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
        ListNode*curr=head;
        int count=0;
        while(curr!=NULL){
            curr=curr->next;
            count++;
        }
        if(count==n){
            return head->next;
        }
        int countc=0;
         ListNode*currt=head;
         while(currt!=NULL){
            
if(countc>=(count-n-1)){
currt->next=currt->next->next;
break;
}
else{
    countc++;
    currt=currt->next;
}
         }
    return head;}
};
