#include <iostream>
using namespace std;

int main() {
    char input[100];
    int i, opCount = 0;

    cout << "Enter Input ";
    cin >> input;

    cout << endl;
    for (i = 0; input[i] != '\0'; i++) {
        if (input[i] == '+' || input[i] == '-' || input[i] == '*' ||
            input[i] == '/' || input[i] == '%' || input[i] == '=') {
            opCount++;
            cout << "operator" << opCount << ":  " << input[i] << endl;
        }
    }

    if (opCount == 0)
        cout << "No operators found." << endl;

    return 0;
}
