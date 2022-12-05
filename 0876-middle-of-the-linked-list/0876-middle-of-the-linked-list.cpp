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
    ListNode* middleNode(ListNode* head) {
        int nodeCount = 0;
        ListNode *tmp = head;
        while(tmp != NULL){
            nodeCount++;
            tmp = tmp->next;
        }
        nodeCount /= 2;
        tmp = head;
        while(nodeCount >= 1){
            tmp = tmp->next;
            nodeCount--;
        }
        return tmp;
    }
};