/*
Delete middle node of a Linked List

Given a singly linked list, delete middle of the linked list.

For example, if given linked list is 1->2->3->4->5 then linked list should be modified to 1->2->4->5

If there are even nodes, then there would be two middle nodes, we need to delete the second middle element.

For example, if given linked list is 1->2->3->4->5->6 then it should be modified to 1->2->3->5->6.

Return the head of the linked list after removing the middle node.

If the input linked list has 1 node, then this node should be deleted and a null node should be returned.


Input Format

The only argument given is the node pointing to the head node of the linked list

*/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* A) {
    ListNode* temp = A;
    int count=0 ;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    if(count==1){
        ListNode *temp = NULL;
        return temp ;
    }
    
    int new_count = count/2;
    count = 0;

    ListNode *tempp = A;
    while(tempp!=NULL){
        count++;
        if(new_count==count){
            tempp->next=tempp->next->next;
        }
        tempp=tempp->next;    
    }
    return A;
}
