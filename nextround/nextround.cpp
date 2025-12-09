#include <iostream>
using namespace std;

int main() {
    int totalParticipants, position;
    cout << "enter number of participants and their position";
    cin >> totalParticipants >> position;

    int scores[50];
    for (int i = 0; i < totalParticipants; i++) {
        cin >> scores[i];
    }

    int minScore = scores[position - 1];
    int c = 0;

    for (int i = 0; i < totalParticipants; i++) {
        if (scores[i] >= minScore && scores[i] > 0) {
            c++;
        }
    }

    cout << c << endl;
    return 0;
}


