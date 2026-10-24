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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* a = head;
        ListNode* b = head->next;

        while (b != NULL) 
        {
            if (b->val != 0)
            {
                a->val += b->val;
            } 
            else
            {
                if(b->next !=NULL)
                {
                    a->next = b;
                    a=b;
                }
                else
                {
                    a->next =0;
                }
            }
                b = b->next;
        }
        return head;
    }
};
