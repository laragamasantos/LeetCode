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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* list = head;
        ListNode* previous = nullptr;
        
        while(list != nullptr){
            ListNode* aux = nullptr;
            
            if(list==head && list->val==val){
                head = head->next;
                list = head;
            } else{
                if(list->val==val){
                    previous->next = list->next;
                    
                } else{
                    previous = list;
                }      
            list = list->next;     
            }
        }
        return head;
    }
};
