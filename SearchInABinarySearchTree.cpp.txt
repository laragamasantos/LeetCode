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
    TreeNode* searchBST(TreeNode* root, int val) {
        stack<TreeNode*> stack;
        TreeNode* current;
        stack.push(root);

        while(stack.size() > 0){
            current = stack.top();
            stack.pop();
            if(current->val == val)
                return current;

            if(current->right != nullptr)
                stack.push(current->right);
            if(current->left != nullptr)
                stack.push(current->left);
        }
        return nullptr;
    }
};