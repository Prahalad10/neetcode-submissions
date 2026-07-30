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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode* dummy=new ListNode(0);
        ListNode* temp=dummy;
        while(l1 || l2 || carry){
            int dig1=0;
            int dig2=0;
            if(l1) dig1=l1->val;
            if(l2) dig2=l2->val;
            int sum=dig1+dig2+carry;
            carry=sum/10;
            sum%=10;
            ListNode* node=new ListNode(sum);
            temp->next=node;
            temp=node;
            if(l1) l1=l1->next;
            if(l2) l2=l2->next;
        }
        return dummy->next;
    }
};
