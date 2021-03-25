#pragma once
#include <iostream>
using namespace std;
class cPerson {
public:
    cPerson();
    cPerson(char* na, char* ad, char* ph, char* em);    //Constructs object with predefined variables
    ~cPerson();
    virtual void Accessor();
    virtual void Mutator();
    virtual void ToString();
    friend istream &operator>>( istream  &input, cPerson &p){   //Calls the mutator for cPerson
        p.Mutator();
        return input;
    }
    friend ostream& operator << (ostream& output, cPerson &p){  //Calls the ToString function which calls the Accessor for cPerson
        p.ToString();
        return output;
    }

private:
    char *name, *address, *phone, *email;
};
