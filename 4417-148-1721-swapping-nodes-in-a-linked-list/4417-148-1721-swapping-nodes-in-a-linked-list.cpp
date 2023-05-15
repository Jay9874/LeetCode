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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *ahead = head, *behind = head;
        while(k-- > 1){
            ahead = ahead->next;
        }
        ListNode *q = ahead;
        while(q->next != NULL){
            behind = behind->next;
            q = q->next;
        }
        int tmp = ahead->val;
        ahead->val = behind->val;
        behind->val = tmp;
        return head;
    }
};