#pragma once
#include <iostream>
#include "cPerson.h"
class cStudent : public cPerson {
public:
    cStudent();
    cStudent(char *na, char *ad, char *ph, char *em, char* ye);
    ~cStudent();
    void Accessor();
    void Mutator();
    void ToString();
    friend istream &operator >> ( istream  &input, cStudent &s){
        s.cPerson::Mutator();
        s.Mutator();
        return input;
    }
    friend ostream& operator << (ostream& output, cStudent &s){
        s.ToString();
        return output;
    }
private:
    char *year;
};
