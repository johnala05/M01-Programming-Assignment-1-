#include <iostream>
#include "romanType.h"
using namespace std;

int main() {
    string input;
    int choice;

    cout << "Enter a Roman numeral: ";
    cin >> input;

    romanType num(input);

    cout << "\nChoose output format:\n";
    cout << "1. Print Roman numeral\n";
    cout << "2. Print integer value\n";
    cout << "Enter choice: ";
    cin >> choice;

    cout << endl;

    if (choice == 1)
        num.printRoman();
    else if (choice == 2)
        num.printInt();
    else
        cout << "Invalid choice.\n";

    return 0;
}
