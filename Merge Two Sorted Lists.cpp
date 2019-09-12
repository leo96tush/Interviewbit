/*
Merge Two Sorted Lists

Merge two sorted linked lists and return it as a new list. The new list should be made by splicing together the nodes of the first two lists, and should also be sorted.

For example, given following linked lists :

  5 -> 8 -> 20 
  4 -> 11 -> 15

The merged list should be :

4 -> 5 -> 8 -> 11 -> 15 -> 20
*/



/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    if(A==NULL) return B;
    if(B==NULL) return A;
    
    ListNode *p1 = A;
    ListNode *p2 = B;
    
    ListNode *head = NULL;
    ListNode *cur = NULL;
    while(p1 && p2){
        if(head == NULL){
            if(p1->val <= p2->val){
                head = cur = p1;
                p1 = p1->next;
            }
            else{
                head = cur = p2;
                p2 = p2->next;
            }
        }
        else{
            if(p1->val <= p2->val){
                cur->next = p1;
                cur = p1;
                p1 = p1->next;
            }
            else{
                cur->next = p2;
                cur = p2;
                p2 = p2->next;
            }
        }
    }
    if(p1) cur->next = p1;
    if(p2) cur->next = p2;
    return head;
}
