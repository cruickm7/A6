#pragma once
#include <iostream>
#include "cPerson.h"
class cEmployee : public cPerson {
public:
    cEmployee();
    cEmployee(char* na, char* ad, char* ph, char* em, char* of, char* sa, char* d0);
    ~cEmployee();
    void Accessor();
    void Mutator();
    friend istream &operator >> ( istream  &input, cEmployee &e){
        e.cPerson::Mutator();
        e.Mutator();
        return input;
    }
    friend ostream& operator << (ostream& output, cEmployee &e){
        e.cPerson::Accessor();
        e.Accessor();
        return output;
    }
private:
    char *office, *salary, *doh;
};