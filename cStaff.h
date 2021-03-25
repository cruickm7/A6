#pragma once
#include <iostream>
#include "cEmployee.h"
class cStaff : public cEmployee {
public:
    cStaff();
    cStaff(char* na, char* ad, char* ph, char* em, char* of, char* sa, char* d0, char* ti); //Constructs object with predefined variables
    ~cStaff();
    void Accessor();
    void Mutator();
    void ToString();
    friend istream &operator >> ( istream  &input, cStaff &s){  //Calls the mutators of entire inheritance chain
        s.cPerson::Mutator();
        s.cEmployee::Mutator();
        s.Mutator();
        return input;
    }
    friend ostream& operator << (ostream& output, cStaff &s){   //Calls the ToString function which calls the Accessors for entire inheritance chain
        s.ToString();
        return output;
    }
private:
    char* title;
};