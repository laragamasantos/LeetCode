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
    ListNode* reverseList(ListNode* head) {
        ListNode *reversed;
        ListNode *aux = nullptr;
        ListNode *list = head;
        
        if(head == nullptr)
            return nullptr;
        
        while(list != nullptr){
            reversed = list;
            reversed->next = aux;
            aux = reversed;
            list = list->next;  
        }
        return reversed;
    }
};
