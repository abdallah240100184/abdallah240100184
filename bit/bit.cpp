#include <iostream>
using namespace std;

int main() {
    int n;
	cout << "enter number of operations";
    cin >> n;

    int x = 0;
    string op;

    for (int i = 0; i < n; i++) {
        cin >> op;
        if (op[1] == '+') x++;
        else x--;
    }

    cout << x;
    return 0;
}