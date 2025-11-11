#include <iostream>
using namespace std;

int main() {
    char line[200];
    int i;
    bool comment = false;

    cout << "Enter a line of code: ";
    cin.getline(line, 200);  

  
    if (line[0] == '/' && line[1] == '/') {
        comment = true;
    }
  
    else if (line[0] == '/' && line[1] == '*') {
        
        i = 2;
        while (line[i] != '\0') {
            if (line[i] == '*' && line[i+1] == '/') {
                comment = true;
                break;
            }
            i++;
        }
    }

    if (comment) {
        cout << "This is a comment line." << endl;
    } else {
        cout << "This is NOT a comment line." << endl;
    }

    return 0;
}
