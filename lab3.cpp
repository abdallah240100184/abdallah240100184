#include <iostream>
using namespace std;
#define size 6;
public:
class stack{
int arr[size];

stack() {
	int top = -1;
}

void push(int x) {
	if (top >= size - 1) {
		cout<<"stack is full";
	}
	else {
		++top;
		arr[top] = x; //arr[++top] = x;
		return arr(top)
	}

}
void pop() {
	if (top < 0) {
		cout << "stack is empty";
	}
	else
	{
		cout<<arr[top--]

	}

}
int print_topvalue() {

}



}

class queue {
	int a[6]
		int front;
		int rear;
		queue() {
			front = -1;
			rear = 0;
		}
		int enqeue(int x) {
			front = 0;


	}

	int deqeue() {

	}
};


//stack implementation

int main() {
	stack s1;
	s1.push(5);
	s1.push(10);
	s1.push(7);
	s1.push(8);
	s1.push(9);

	s1.pop();
	

	return 0;
}