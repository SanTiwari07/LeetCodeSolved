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
    int summ = 0;
    int sample(TreeNode* root){
        if(root == NULL) return 0;
        int x = sample(root->left);
        int y = sample(root->right);
        summ = max(x+y,summ);
        return max(x,y)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        sample(root);
        return summ;
    }
};
