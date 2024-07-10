class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* prev = head;
        if(head==NULL || head->next==NULL) return NULL;
        while(fast!=NULL && fast->next!=NULL){
            prev = slow;
            slow=slow->next;
            fast=fast->next->next;   
        }
        prev->next=prev->next->next;
        delete slow;
        return head;
    }
};
