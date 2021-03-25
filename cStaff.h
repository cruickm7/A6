#pragma once
#include <iostream>
#include "cEmployee.h"
class cStaff : public cEmployee {
public:
    cStaff();
    ~cStaff();
    void Accessor();
    void Mutator();
    friend istream &operator >> ( istream  &input, cStaff &s){
        s.cPerson::Mutator();
        s.cEmployee::Mutator();
        s.Mutator();
        return input;
    }
    friend ostream& operator << (ostream& output, cStaff &s){
        s.cPerson::Accessor();
        s.cEmployee::Accessor();
        s.Accessor();
        return output;
    }
private:
    char* title;
};