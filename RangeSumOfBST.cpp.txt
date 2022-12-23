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
    int rangeSumBST(TreeNode* root, int low, int high) {
        queue<TreeNode*> queue;
        TreeNode* current;
        int sum = 0;
        queue.push(root);

        while(queue.size() > 0){
            current = queue.front();
            queue.pop();
            if(current->val >= low && current->val <= high)
                sum += current->val;

            if(current->left != nullptr)
                queue.push(current->left);
            if(current->right != nullptr)
                queue.push(current->right);   
        }
        return sum;
    }
};