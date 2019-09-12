/*
Remove Nth Node from List End

Given a linked list, remove the nth node from the end of list and return its head.

For example, Given linked list: 1->2->3->4->5, and n = 2. After removing the second node from the end, the linked list becomes 1->2->3->5.

    Note:

        If n is greater than the size of the list, remove the first node of the list.

Try doing it using constant additional space. 
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    ListNode* temp = A;
    int count=0 ;
    while(temp!=NULL){
        count++;
        //cout << temp->val << " " << count << endl;
        temp=temp->next;
    }
    if(count==1 && B==1){
        ListNode *temp = NULL;
        return temp ;
    }
    if(B>=count){
        A=A->next;
        return A;
    }
    int new_count = count-B;
    count = 0;
    //cout << new_count << endl;
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
