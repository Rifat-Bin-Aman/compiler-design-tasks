#include <iostream>
#include <string>
using namespace std;

bool isValidIdentifier(string x, int& errorPosition) {
    if (!((x[0] >= 'a' && x[0] <= 'z') || (x[0] >= 'A' && x[0] <= 'Z') || x[0] == '_')) {
        errorPosition = 0;
        return false;
    }

    for (int i = 1; i < x.length(); i++) {
        if (!((x[i] >= 'a' && x[i] <= 'z') || (x[i] >= 'A' && x[i] <= 'Z') || (x[i] >= '0' && x[i] <= '9') || x[i] == '_')) {
            errorPosition = i;
            return false;
        }
    }

    return true;
}

int main() {
    string x;
    cout << "Enter a string: ";
    cin >> x;

    int errorPos;
    if (isValidIdentifier(x, errorPos))
        cout << "Valid";
    else
        cout << "Invalid at position " << errorPos;

    return 0;
}
