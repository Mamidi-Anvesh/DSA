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
    void pot(vector<int>&pre,TreeNode* root){
        if(root == NULL){
            return;
        }
        pre.push_back(root->val);
        pot(pre,root->left);
        pot(pre,root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> pre;
        pot(pre,root);
        return pre;
    }
};