#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

//Approach - 3(Recursive)
//It will return head of the reverse list
Node* reverse1(Node* head) {
	//base case
	if(head == NULL || head -> next == NULL) {
		return head;
	}

	Node* chotaHead = reverse1(head -> next);

	head -> next -> next = head;
	head -> next = NULL;

	return chotaHead;

}

//Approach - 2(Recursive)
void reverse(Node* &head, Node* curr, Node* prev) {

	//base case
	if(curr == NULL) {
		head = prev;
		return;
	}

	Node* forward = curr -> next;
	reverse(head, forward, curr);
	curr -> next = prev;

}

Node* reverseLinkedList(Node *head)
{
	//Approach - 3(Recursive)
	return reverse1(head);

	//Approach - 2(Recursive)
	/*
	Node* curr = head;
	Node* prev = NULL;
	reverse(head, curr, prev);
	return head;*/

	//Approach - 1(Iterative)
	/*
	if(head == NULL || head -> next == NULL) {
		return head;
	}

    Node* prev = NULL;
	Node* curr = head;
	Node* forward = NULL;

	while(curr != NULL) {
		forward = curr -> next;
		curr -> next = prev;
		prev = curr;
		curr = forward;
	}

	return prev;*/

}
