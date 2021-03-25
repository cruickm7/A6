#pragma once
#include <iostream>
#include "cPerson.h"
class cStudent : public cPerson {
public:
    cStudent();
    cStudent(char *na, char *ad, char *ph, char *em, char* ye); //Constructs object with predefined variables
    ~cStudent();
    void Accessor();
    void Mutator();
    void ToString();
    friend istream &operator >> ( istream  &input, cStudent &s){    //Calls the mutators of entire inheritance chain
        s.cPerson::Mutator();
        s.Mutator();
        return input;
    }
    friend ostream& operator << (ostream& output, cStudent &s){ //Calls the ToString function which calls the Accessors for entire inheritance chain
        s.ToString();
        return output;
    }
private:
    char *year;
};
