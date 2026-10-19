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
    vector<int>sample;
    void sanskar(TreeNode* root){
        if(root == NULL) return;
            
            sanskar(root->left);
            sample.push_back(root->val);
            sanskar(root->right);
        
    }
    TreeNode* increasingBST(TreeNode* root) {
        sanskar(root);
        TreeNode* answer = new TreeNode(-1);
        TreeNode* curr = answer;
        for(int a = 0 ; a < sample.size() ; a++){
            curr->right = new TreeNode(sample[a]);
            curr = curr->right;
        }
        return answer->right;
    }
};
