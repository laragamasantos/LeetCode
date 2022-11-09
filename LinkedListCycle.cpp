/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *p = head;
        
        vector<ListNode *> pointers;

        while(p != nullptr){
            if(count(pointers.begin(), pointers.end(), p) == 0)
                pointers.push_back(p);
            else
                return true;
            p = p->next;
        }
        
        return false;
    }
};
