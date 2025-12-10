

#include <iostream>
using namespace std;
struct node {
	int data;
	node* next;
};
class linkedlist {
	node* head;

	linkedlist() {
		head = NULL;

	};
	void add_beggining(int x) {
		node newnode;
		if (head == NULL) {
			head = &newnode;
			newnode.next = NULL;
			newnode.data = x;
			
		}
		else {
			newnode.data = x;
			newnode.next = head;
			head = &newnode;

		}
	};
	void add_end(int x) {
		node* endelement;
		endelement = head;
		while (endelement->next != NULL) {
			endelement = endelement->next;
		
		}
		node* newnode = new node();

		endelement->next = newnode;

		newnode->next = NULL;

		
	};
};


