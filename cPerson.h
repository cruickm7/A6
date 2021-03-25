#include <iostream>
#pragma once
using namespace std;
class cPerson {
public:
    cPerson();
    ~cPerson();
    virtual void Accessor();
    virtual void Mutator();
    friend istream &operator>>( istream  &input, cPerson &p){
        p.Mutator();
        return input;
    }
    friend ostream& operator << (ostream& output, cPerson &p){
        p.Accessor();
        return output;
    }

private:
    char *name, *address, *phone, *email;
};
