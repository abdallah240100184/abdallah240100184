#include <iostream>
using namespace std;

int main() {
    int matrix[5][5];
    int posX, posY;

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) {
                posX = i + 1;
                posY = j + 1;
            }
        }
    }

    int moves = abs(3 - posX) + abs(3 - posY);
    cout << moves << endl;
    return 0;
}
//got the abs function using ai, i use it to make values positive
