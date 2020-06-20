/* Problem:
Given a singly linked list, modify the value of first half nodes such that :

1st node’s new value = the last node’s value - first node’s current value
2nd node’s new value = the second last node’s value - 2nd node’s current value,
and so on …

Example :

Given linked list 1 -> 2 -> 3 -> 4 -> 5,

You should return 4 -> 2 -> 3 -> 4 -> 5
*/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* rear;

int length(ListNode* head){
    int n = 0;
    while(head!=NULL){
        n++;
        head = head->next;
    }
    
    return n;
}

void pos(ListNode* head, int n){
    rear = head;                                    //
    if(n%2==0){
        for(int i=0;i<(n/2);i++){
            rear = rear->next;
        }
    }
    
    else{
        for(int i=0;i<(n/2)+1;i++){
            rear = rear->next;
        }
    }
}


ListNode* reverse(ListNode* r , int n){
    ListNode *prev,*current,*next;
    prev = NULL;
    current = r;
    for(int i=0;i<(n/2);i++){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}
 
ListNode* Solution::subtract(ListNode* A) {
    int n = length(A);
    if(n==1) return A;
    pos(A,n);
    ListNode* a = A;
    rear = reverse(rear,n);
    ListNode* r = rear;
    for(int i=0;i<(n/2);i++){
        a->val = r->val - a->val;
        a = a->next;
        r = r->next;
    }
    
    rear = reverse(rear,n);
    
    return A;
    
    
}
