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
    bool hasCycle(ListNode* head) {
        bool  ans=false;
ListNode*current=head;
set<ListNode*> se;
while(current!=NULL){
    if(se.find(current)!=se.end()){
ans=true;
break;
    }
    else{
        se.insert(current);
    }
    current=current->next;
}
    return ans;}
};
