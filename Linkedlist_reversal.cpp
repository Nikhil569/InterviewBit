#include <bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node* next;
};

Node* insert(Node* head, int data){
	Node* tmp = new Node();
	tmp->data = data;	
	if(head == NULL){
		head = tmp;
	}

	else{
		Node* a = head;
		while(a->next!=NULL){
			a = a->next;
		} 

		a->next = tmp;
	}
	return head;

}


void print(Node* head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
}

Node* reverse(Node* head){
	Node *prev,*current,*next;

	current = head;
	prev = NULL;
	next = head->next;

	while(current!=NULL){
		next = current->next;
		current->next = prev;
		prev = current;
		//next = current->next; 
		current = next;
		//next = next->next;

		//cout<<current->data; 
	}

	head = prev;
	return head;

}


int main(int argc, char const *argv[])
{
	Node* head;

	head = insert(head,1);
	head = insert(head,2);
	head = insert(head,3);
	head = insert(head,4);
	head = insert(head,5);

	print(head);
	cout<<endl;
	head = reverse(head);
	print(head);

	return 0;
}