#pragma once
#include <iostream>
#include "cPerson.h"
class cEmployee : public cPerson {
public:
    cEmployee();
    cEmployee(char* na, char* ad, char* ph, char* em, char* of, char* sa, char* d0);    //Constructs object with predefined variables
    ~cEmployee();
    void Accessor();
    void Mutator();
    void ToString();
    friend istream &operator >> ( istream  &input, cEmployee &e){   //Calls the mutators of entire inheritance chain
        e.cPerson::Mutator();
        e.Mutator();
        return input;
    }
    friend ostream& operator << (ostream& output, cEmployee &e){    //Calls the ToString function which calls the Accessors for entire inheritance chain
        e.ToString();
        return output;
    }
private:
    char *office, *salary, *doh;
};