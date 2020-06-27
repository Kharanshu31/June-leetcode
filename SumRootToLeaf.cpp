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
    int final_sum=0;
    void preorder(TreeNode* root,int sum)
    {
        if(!root)
            return ;
        if(root->left==NULL && root->right==NULL)
        {
            final_sum+=10*sum+root->val;
            return;
        }
        
        preorder(root->left,10*sum+root->val);
        preorder(root->right,10*sum+root->val);
        
    }
    
    int sumNumbers(TreeNode* root) {
        
        preorder(root,0);
        
        return final_sum;
    }
};
