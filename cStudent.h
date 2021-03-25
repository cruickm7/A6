#pragma once
#include <iostream>
#include "cPerson.h"
class cStudent : public cPerson {
public:
    cStudent();
    ~cStudent();
    void Accessor();
    void Mutator();
    friend istream &operator>>( istream  &input, cStudent &s){
        s.cPerson::Mutator();
        s.Mutator();
        return input;
    }
    friend ostream& operator << (ostream& output, cStudent &s){
        s.cPerson::Accessor();
        s.Accessor();
        return output;
    }
private:
    char *year;
};
