// lab4.queue.cpp : This file contains the 'main' function. Program execution begins and ends there.
//this is queue part of the lab

#include <iostream>
using namespace std;
#define size 6
class queue {
public:
    int arr[size];
    int rear, front;

    queue() {
        front = 0;
        rear = -1;
    }
    void enqueue(int x) {
        if (front > rear && front == size) {
            cout << "is full";
        }
        else {
            if (rear == -1 && front == 0) {
                arr[front++] = x;
                rear = 0;
            }
            else {
                arr[front] = x;
            }
        }
        int deque(); {
            {
                if (rear == -1 && front = 0) {
                    return -1;
                }
                else {
                    if (front == size) {
                        return arr[rear++];
                        front = 0;

                    }
                    else {
                        return arr[rear++];


                    }
                }
            }
        }
    }

        };
