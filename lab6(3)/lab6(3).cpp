// lab6(3).cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;
struct node {
	int data;
	node* next;
};
class linkedlist {
	node* head;

public:
	linkedlist() {
		head = NULL;
	};
	void add_beggining(int x) {
		node* newnode = new node;
		newnode->data = x;
		newnode->next = head;
		head = newnode;
	};
	void add_end(int x) {
		node* newnode = new node;
		newnode->data = x;
		newnode->next = NULL;
		if (head == NULL) {
			head = newnode;
			return;
		}
		node* temp = head;
		while (temp->next != NULL) {
			temp = temp->next;
		}
		temp->next = newnode;
	};
	void add_specefic_index(int index, int y) {
		if (index == 0) {
			add_beggining(y);
			return;
		}
		node* temp = head;
		for (int i = 0; i < index - 1 && temp != NULL; i++) {
			temp = temp->next;
		}
		if (temp == NULL) {
			cout << "Index out of bounds!" << endl;
			return;
		}
		node* newnode = new node;
		newnode->data = y;
		newnode->next = temp->next;
		temp->next = newnode;
	}
	void delete_beginning() {
		if (head == NULL) return;
		node* temp = head;
		head = head->next;
		delete temp;
	}
	void delete_end() {
		if (head == NULL) return;
		if (head->next == NULL) {
			delete head;
			head = NULL;
			return;
		}
		node* temp = head;
		while (temp->next->next != NULL) {
			temp = temp->next;
		}
		delete temp->next;
		temp->next = NULL;
	}
	void delete_by_value(int value) {
		if (head == NULL) return;
		if (head->data == value) {
			delete_beginning();
			return;
		}
		node* temp = head;
		while (temp->next != NULL && temp->next->data != value) {
			temp = temp->next;
		}
		if (temp->next == NULL) return;
		node* toDelete = temp->next;
		temp->next = temp->next->next;
		delete toDelete;
	}
	void reverse() {
		node* prev = NULL;
		node* current = head;
		node* next = NULL;
		while (current != NULL) {
			next = current->next;
			current->next = prev;
			prev = current;
			current = next;
		}
		head = prev;
	}
	void display() {
		node* temp = head;
		while (temp != NULL) {
			cout << temp->data << " -> ";
			temp = temp->next;
		}
		cout << "NULL" << endl;
	}
};