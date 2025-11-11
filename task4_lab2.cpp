#include <iostream>
using namespace std;

int main() {
    char line[100];
    int i, valid = 1;

    cout << "Enter an identifier: ";
    cin >>line;

    if (!((line[0] >= 'A' &&line[0] <= 'Z') || 
          (line[0] >= 'a' &&line[0] <= 'z') || 
          (line[0] == '_'))) {
        valid = 0;
    }
    for (i = 1;line[i] != '\0'; i++) {
        if (!((line[i] >= 'A' &&line[i] <= 'Z') ||
              (line[i] >= 'a' &&line[i] <= 'z') ||
              (line[i] >= '0' &&line[i] <= '9') ||
              (line[i] == '_'))) {
            valid = 0;
            break;
        }
    }
    if (valid == 1)
        cout <<line << " is a valid Identifier." << endl;
    else
        cout <<line << " is not a valid Identifier." << endl;

    return 0;
}
