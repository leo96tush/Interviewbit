/*
Middle element of linked list

Given a linked list of integers. Find and return the middle element of the linked list.

Note: If there are N nodes in the linked list and N is even then return the (N/2+1)th element.


Input Format

The only argument given head pointer of linked list.

Output Format

Return the middle element of the linked list.

Constraints

1 <= length of the linked list <= 100000
1 <= Node value <= 10^9 

For Example

Input 1:
    1->2->3->4->5
Output 1:
   3 

Input 2:
    A = 1->5->6->2->3->4
Output 2:
    2

*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::solve(ListNode* A) {
    ListNode *B = A;
    if(B==NULL){
        return 0;
    }
    int count = 0;
    while(B!=NULL){
        B = B->next;
        count++;
    }
    int check_counter=0;
    ListNode* C = A;
    while(C!=NULL){
        check_counter++;
        if(check_counter==1+(count/2)){
            return (C->val);
        }
        C = C->next;
    }
}
