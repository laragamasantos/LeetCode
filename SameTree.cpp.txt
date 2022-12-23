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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        stack<TreeNode*> stack1;
        stack<TreeNode*> stack2;
        TreeNode* current1;
        TreeNode* current2;

        if(p == nullptr && q == nullptr)
            return true;
        else if((p == nullptr && q != nullptr) || (p != nullptr && q == nullptr))
            return false;

        stack1.push(p);
        stack2.push(q);

        while(stack1.size() > 0 && stack2.size() > 0){
            current1 = stack1.top();
            current2 = stack2.top();
            stack1.pop();
            stack2.pop();

            if(current1->val != current2->val)
                return false;
            if(current1->left != nullptr && current2->left == nullptr)
                return false;
            if(current1->right != nullptr && current2->right == nullptr)
                return false;
            if(current1->left != nullptr)
                stack1.push(current1->left);
            if(current1->right != nullptr)
                stack1.push(current1->right);
            if(current2->left != nullptr)
                stack2.push(current2->left);
            if(current2->right != nullptr)
                stack2.push(current2->right);
            if(stack1.size() != stack2.size())
                return false;
        }
        return true;
    }
};