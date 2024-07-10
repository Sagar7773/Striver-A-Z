// Approach 1 or Brute force
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int len = 0;
        ListNode* temp = head;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        int midIdx = len/2;
        ListNode* mid = head;
        for(int i=0;i<midIdx;i++)
            mid=mid->next;
        
        return mid;

    }
};

// Approach 2 or Optimal one not via sc its becuz in one pass or loop(using kachua and karghos)

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast!=NULL && fast->next!=NULL ){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};
