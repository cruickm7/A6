#include <iostream>
#pragma once
using namespace std;
class cPerson {
public:
    cPerson();
    cPerson(char* na, char* ad, char* ph, char* em);
    ~cPerson();
    virtual void Accessor();
    virtual void Mutator();
    virtual void ToString();
    friend istream &operator>>( istream  &input, cPerson &p){
        p.Mutator();
        return input;
    }
    friend ostream& operator << (ostream& output, cPerson &p){
        p.ToString();
        return output;
    }

private:
    char *name, *address, *phone, *email;
};
