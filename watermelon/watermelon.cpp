// watermelon.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
	int x;
    cout << "enter a number from 1 to 100";
    cin >> x;
}
     while (1 =< x &&  x <= 100)
{
    if (x % 2 == 0) {
        cout << "yes";
    }
    else {
        cout << "no";
    }
	return 0;
}