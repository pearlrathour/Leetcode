/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;c
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *currA = headA, *currB = headB;
        
        while(currA != currB){
            
//             if(currA == currB)
//                 return currA;
            if(currA == NULL){
                currA=headB;
            }
            else
                currA = currA->next;
            if(currB == NULL){
                currB=headA;
            }    
            else
                currB = currB->next;
        }
        return currA;
    }
};