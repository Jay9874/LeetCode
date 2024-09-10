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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* p = head;
        while(p->next != NULL){
            ListNode* nextNode = p->next;
            int gcdVal = gcd(p->val, nextNode->val);
            ListNode* newNode = new ListNode(gcdVal, nextNode);
           

            p->next = newNode;
            p = nextNode;
        }
        return head;
        
    }
    int gcd(int a, int b){
        int mini = min(a, b);
        int maxi = max(a, b);
        int rem = maxi % mini;
        int gcd = mini;
        while(rem != 0){
            maxi = mini;
            mini = rem;
            rem = maxi % mini;
            gcd = mini;
        }
        return gcd;
    }
        
    
};