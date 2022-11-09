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
    bool isPalindrome(ListNode* head) {
        ListNode *p = head;
        vector<int> list;
        vector<int> palindrome;
        int element;
        int aux = 0;
        
        while(p != nullptr){
            element = p->val;
            list.push_back(element);
            palindrome.insert(palindrome.begin(), element);

            p = p->next;
        }
        
        if(list == palindrome)
            return true;
        else
            return false;
    }
};
