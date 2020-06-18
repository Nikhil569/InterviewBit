#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node* next;
};

void insert(Node** a){
	Node* tmp = new Node();
	cin>>tmp -> data;

	tmp -> next = *a;

	*a = tmp;
	//cout<<a->data;

}

int main(int argc, char const *argv[])
{
	Node* head = new Node();
	Node* second = new Node();
	Node* third = new Node();
	
	head -> data = 1;
	second -> data = 2;
	third -> data = 3;

	head -> next = second;
	second -> next = third;

	insert(&head);

	Node* tmp = head;

	while(tmp!=NULL){
		cout<<tmp -> data<<" ";
		tmp = tmp -> next;
	}


	return 0;
}