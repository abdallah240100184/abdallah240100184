#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string str1, str2;

    cin >> str1 >> str2;

    for (char& c : str1) c = tolower(c);
    for (char& c : str2) c = tolower(c);

    if (str1 < str2) {
        cout << "-1" << endl;
    }
    else if (str1 > str2) {
        cout << "1" << endl;
    }
    else {
        cout << "0" << endl;
    }

    return 0;
}
//eng.Ashraf gave me hints about the asci library
