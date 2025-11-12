#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool isDataTypeKeyword(const string& word) {
    string dataTypes[] = {"int", "float", "double", "char", "string"};
    for (string k : dataTypes) {
        if (word == k) return true;
    }
    return false;
}

bool isControlKeyword(const string& word) {
    string control[] = {"if", "else", "for", "while", "return"};
    for (string k : control) {
        if (word == k) return true;
    }
    return false;
}

bool isPunctuation(char ch) {
    string punct = ";,':(){}[]=+-*/";
    return punct.find(ch) != string::npos;
}

int main() {
    ifstream file("Token.txt");
    if (!file) {
        cout << "Error: Cannot open file!" << endl;
        return 0;
    }

    string token;
    while (file >> token) {
        if (isDataTypeKeyword(token)) {
            cout << token << " --> Keyword (Data type)" << endl;
        }
        else if (isControlKeyword(token)) {
            cout << token << " --> Keyword (Control)" << endl;
        }
        else if (token.length() == 1 && isPunctuation(token[0])) {
            cout << token << " --> Punctuation" << endl;
        }
        else if (isdigit(token[0])) {
            cout << token << " --> Number" << endl;
        }
        else {
            cout << token << " --> Variable" << endl;
        }
    }

    file.close();
    return 0;
}
