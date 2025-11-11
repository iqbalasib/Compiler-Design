#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter number of elements: ";
    cin >> a;

    int b[100];
    cout << "Enter elements: ";
    for (int i = 0; i < a; i++)
        cin >> b[i];

    int min = b[0], max = b[0];

    for (int i = 1; i < a; i++) {
        if (b[i] < min)
            min = b[i];
        if (b[i] > max)
            max = b[i];
    }

    cout << "Minimum = " << min << endl;
    cout << "Maximum = " << max << endl;
    return 0;
}