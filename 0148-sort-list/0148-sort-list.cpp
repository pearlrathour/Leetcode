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
    ListNode *findMid(ListNode *head){
        ListNode *fast = head->next;
        ListNode *slow = head;
        while(fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
    
    
    ListNode *mergeList(ListNode *left, ListNode *right){
        if(left == NULL)
            return right;
        if(right == NULL)
            return left;
        ListNode *dummy = new ListNode(0);
        ListNode *temp = dummy;
        while(left != NULL && right != NULL){
            if(left->val < right->val){
                temp->next = left;
                temp = left;
                left = left->next;
            }
            else{
                temp->next = right;
                temp = right;
                right = right->next;
            }
        }
        
        while(left != NULL){
            temp->next = left;
            temp = left;
            left = left->next;
        }
        while(right != NULL){
            temp->next = right;
            temp = right;
            right = right->next;
        }
        // leaving dummy node and moving to actual head of answer
        dummy = dummy->next;
        // returning ans, which is head of merged list
        return dummy;
    }
    
    
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;
        
        ListNode *mid = findMid(head);
        ListNode *leftHalfHead = head;
        ListNode *rightHalfHead = mid->next;
        // making mid's next point to null will make it a individual list
        mid->next = NULL;
        
        leftHalfHead = sortList(leftHalfHead);
        rightHalfHead = sortList(rightHalfHead);
        
        ListNode *result = mergeList(leftHalfHead, rightHalfHead);
        return result;
    }
};