/*
Given a linked list, return the node where the cycle begins. If there is no cycle, return null.

Try solving it using constant additional space.

Example :

Input : 

                  ______
                 |     |
                 \/    |
        1 -> 2 -> 3 -> 4

Return the node corresponding to node 3. 
*/





/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::detectCycle(ListNode* A) {
    ListNode *first = A,*second=A;
    
    if(second->next==NULL) return NULL;
    while(second!=NULL){
        first = first->next;
        if(second->next==NULL)  return NULL;
        second = second->next->next;
        if(first==second) break;
    }
    
    if(second==NULL || second->next==NULL)  return NULL;
    else{
        first = A;
        while(first!=second){
            first = first->next;
            second = second->next;
        }
    }
    
    return first;
    
}
