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
        int node_count = 0;
        ListNode *p = head;
        vector<ListNode *> v;
        while(p != NULL){
            v.push_back(p);
            p = p->next;
            node_count++;
        }
        int toDelete = (node_count) - n;
        if(toDelete == 0){
            if(node_count == 1)
            head = NULL;
            else{
                head = head->next;
            }
        }
        else{
            v[toDelete -1]->next = v[toDelete]->next;
        }
        
        return head;
        
    }
};