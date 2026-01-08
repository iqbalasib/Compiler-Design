#include <iostream>
#include <string>
using namespace std;

int main() {

    cout << "Regular Expression: (ba)*b*a[a+ba(a+b)]*\n";


    string input;
    cout << "Enter string: ";
    cin >> input;

    string state = "q0";

    for (int i = 0; i < input.length(); i++) {
        char ch = input[i];


        if (ch != 'a' && ch != 'b') {
            cout << "\nError: Invalid character!\n\n";
            return 0;
        }


        if (state == "q0") {
            if (ch == 'a') state = "q1";
            else if (ch == 'b') state = "q2";
        }
        else if (state == "q1") {
            if (ch == 'a') state = "q1";
            else if (ch == 'b') state = "q3";
        }
        else if (state == "q2") {
            if (ch == 'a') state = "q4";
            else if (ch == 'b') state = "q5";
        }
        else if (state == "q3") {
            if (ch == 'a') state = "q6";
            else {
                cout << "\nString REJECTED!\n\n";
                return 0;
}
}
        else if (state == "q4") {
            if (ch == 'a') state = "q1";
            else if (ch == 'b') state = "q7";
        }
        else if (state == "q5") {
            if (ch == 'a') state = "q1";
            else if (ch == 'b') state = "q5";
        }
        else if (state == "q6") {
            if (ch == 'a') state = "q1";
            else if (ch == 'b') state = "q1";
        }
        else if (state == "q7") {
            if (ch == 'a') state = "q8";
            else if (ch == 'b') state = "q5";
        }
        else if (state == "q8") {
            if (ch == 'a') state = "q1";
            else if (ch == 'b') state = "q9";
        }
        else if (state == "q9") {
            if (ch == 'a') state = "q8";
            else if (ch == 'b') state = "q10";
        }
        else if (state == "q10") {
            if (ch == 'a') state = "q11";
            else if (ch == 'b') state = "q5";
        }
        else if (state == "q11") {
            if (ch == 'a') state = "q1";
            else if (ch == 'b') state = "q12";
        }
        else if (state == "q12") {
            if (ch == 'a') state = "q11";
            else if (ch == 'b') state = "q3";
        }
    }

    if (state == "q1" || state == "q4" || state == "q8" ||
        state == "q9" || state == "q11" || state == "q12") {
        cout << "\nString ACCEPTED!\n\n";
    }
    else {
        cout << "\nString REJECTED!\n\n";
    }

    return 0;
}
