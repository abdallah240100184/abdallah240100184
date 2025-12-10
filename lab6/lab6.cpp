// lab6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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
		node* newnode = new node;
		if (head == NULL) {
			head = newnode;
			newnode->next = NULL;
			newnode->data = x;

		}
		else {
			newnode->data = x;
			newnode->next = head;
			head = newnode;

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
	void add_specefic_index(int index, int y) {
		node* x;
		x = head;
		node* newnode = new node();
		int c = 0;
		while (x->next != NULL && index != c) {
			x = x->next;
		}
		newnode->next = x->next;
		x->next = newnode;
		newnode->data = y;
	}
	void add_specefic_index(int index) {
		node* x;
		x = head;
		node* newnode = new node();
		int value;
		while (x->next != NULL && x->data != value) {
			x = x->next;
		}
		newnode->next = x->next;
		x->next = newnode;


	}
};