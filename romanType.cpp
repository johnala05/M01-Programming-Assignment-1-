#include "romanType.h"
#include <iostream>
using namespace std;

romanType::romanType() {
    roman = "";
    value = 0;
}

romanType::romanType(string r) {
    setRoman(r);
}

void romanType::setRoman(string r) {
    roman = r;
    convert();
}

int romanType::romanCharValue(char c) {
    switch (c) {
        case 'M': return 1000;
        case 'D': return 500;
        case 'C': return 100;
        case 'L': return 50;
        case 'X': return 10;
        case 'V': return 5;
        case 'I': return 1;
        default: return 0;
    }
}

int romanType::convert() {
    value = 0;
    int length = roman.length();

    for (int i = 0; i < length; i++) {
        int current = romanCharValue(roman[i]);
        int next = (i + 1 < length) ? romanCharValue(roman[i + 1]) : 0;

        if (current < next)
            value -= current;
        else
            value += current;
    }

    return value;
}

void romanType::printRoman() const {
    cout << "Roman Numeral: " << roman << endl;
}

void romanType::printInt() const {
    cout << "Integer Value: " << value << endl;
}
