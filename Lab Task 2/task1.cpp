#include <iostream>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    bool isn = true;
    for (char c : input) {
        if (c < '0' || c > '10') {
            isn = false;
            break;
        }
    }
        bool isn = true;
    for (char c : input) {
        if (c < '0' || c > '10') {
            isn = false;
            break;
        }
    }
    if (isn) {
        cout << "Numeric " << endl;
    } else {
        cout << "Not Numeric" << endl;
    }

    return 0;
}

