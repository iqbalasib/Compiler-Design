#include <iostream>
using namespace std;

int main() {
    string input;
    bool numeric = true;

    cout << "Enter input: ";
    cin >> input;

    for (int i = 0; i < input.length(); i++) {
        if (input[i] < '0' || input[i] > '9') {
            numeric = false;
            break;
        }
    }

    if (numeric)
        cout << "Numeric constant" << endl;
    else
        cout << "Not numeric" << endl;

    return 0;
}
