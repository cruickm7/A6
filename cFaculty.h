#pragma once
#include <iostream>
#include "cEmployee.h"
class cFaculty : public cEmployee {
public:
    cFaculty();
    cFaculty(char* na, char* ad, char* ph, char* em, char* of, char* sa, char* d0, char* of2, char* ho, char* ra);
    ~cFaculty();
    void Accessor();
    void Mutator();
    friend istream &operator >> ( istream  &input, cFaculty &f){
        f.cPerson::Mutator();
        f.cEmployee::Mutator();
        f.Mutator();
        return input;
    }
    friend ostream& operator << (ostream& output, cFaculty &f){
        f.cPerson::Accessor();
        f.cEmployee::Accessor();
        f.Accessor();
        return output;
    }
private:
    char *office, *hours, *rank;
};