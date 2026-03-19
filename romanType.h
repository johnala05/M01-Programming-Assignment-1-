#ifndef ROMANTYPE_H
#define ROMANTYPE_H

#include <string>
using namespace std;

class romanType {
private:
    string roman;
    int value;

    int romanCharValue(char c);

public:
    romanType();
    romanType(string r);

    void setRoman(string r);
    int convert();
    void printRoman() const;
    void printInt() const;
};

#endif
