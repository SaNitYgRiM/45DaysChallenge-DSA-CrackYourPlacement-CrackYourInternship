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
    ListNode* partition(ListNode* head, int x) {
        ListNode *left = new ListNode(0);
        ListNode *right = new ListNode(0);
        
        ListNode *leftTail = left;
        ListNode *rightTail = right;
        
        while(head != NULL){
            if(head->val < x){
                leftTail->next = head;
                leftTail = leftTail->next;
            }
            else{
                rightTail->next = head;
                rightTail = rightTail->next;
            }
            head = head->next;
        }
        
        leftTail->next = right->next;
        rightTail->next = NULL;
        
        return left->next;
        
    }
};
