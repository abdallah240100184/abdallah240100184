// ass1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};


class Stack {
private:
    Node* top;

public:
    Stack() {
        top = NULL;
    }

    
    void push(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        
        newNode->next = top;
        
        top = newNode;
    }

    
    void display() const {
        Node* current = top;
        while (current != NULL) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};


class Queue {
private:
    Node* front;   
    Node* rear;    

public:
    Queue() {
        front = rear = NULL;
    }

    
    void enqueue(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = NULL;

        if (rear == NULL) {
            
            front = rear = newNode;
        }
        else {
            
            rear->next = newNode;
            
            rear = newNode;
        }
    }

    
    void display() const {
        Node* current = front;
        while (current != NULL) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};


int main() {

    cout << "Testing Stack:" << endl;
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();

    cout << "\nTesting Queue:" << endl;
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();

    return 0;
}