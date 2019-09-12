/*
Swap List Nodes in pairs

Given a linked list, swap every two adjacent nodes and return its head.

For example, Given 1->2->3->4, you should return the list as 2->1->4->3.

Your algorithm should use only constant space. You may not modify the values in the list, only nodes itself can be changed.
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

void swap(int a,int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

ListNode* Solution::swapPairs(ListNode* A) {
    ListNode* temp = A;
    while(temp!=NULL && temp->next!=NULL){
        int t = temp->val;
        temp->val = temp->next->val;
        temp->next->val = t;
        
        temp = temp->next->next;
    }
    return A;
}
