/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void inOrder(TreeNode *p, vector<int> &ds){
        if(p == NULL){
            return;
        }
        inOrder(p->left, ds);
        ds.push_back(p->val);
        inOrder(p->right, ds);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> ds; 
        inOrder(root, ds);
        int n = ds.size();
        int total = 0;
        bool flag = false;
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                total = ds[i] + ds[j];
                if(total == k){
                    flag = true;
                    break;
                }
            }
            if(flag) break;
        }
        if(flag) return true;
        else return false;
    }
};