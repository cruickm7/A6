#pragma once
#include <iostream>
#include "cEmployee.h"
class cFaculty : public cEmployee {
public:
    cFaculty();
    cFaculty(char* na, char* ad, char* ph, char* em, char* of, char* sa, char* d0, char* of2, char* ho, char* ra);  //Constructs object with predefined variables
    ~cFaculty();
    void Accessor();
    void Mutator();
    void ToString();
    friend istream &operator >> ( istream  &input, cFaculty &f){    //Calls the mutators of entire inheritance chain
        f.cPerson::Mutator();
        f.cEmployee::Mutator();
        f.Mutator();
        return input;
    }
    friend ostream& operator << (ostream& output, cFaculty &f){ //Calls the ToString function which calls the Accessors for entire inheritance chain
        f.ToString();
        return output;
    }
private:
    char *office, *hours, *rank;
};