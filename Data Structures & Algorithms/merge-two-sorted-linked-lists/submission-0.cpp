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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp1=list1;
        ListNode* temp2=list2;
        vector<int> temp;
        while(temp1){
            temp.push_back(temp1->val);
            temp1=temp1->next;
        }
        while(temp2){
            temp.push_back(temp2->val);
            temp2=temp2->next;
        }
        sort(temp.begin(),temp.end());
        ListNode* dummy=new ListNode(0);
        ListNode* tempp=dummy;
        for(int num:temp){
            ListNode* node=new ListNode(num);
            tempp->next=node;
            tempp=node;
        }
        return dummy->next;
    }
};
