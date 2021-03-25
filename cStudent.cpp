#include "cStudent.h"

cStudent::cStudent():cPerson(){
    year = new char[100];
}

cStudent::~cStudent() {
    delete year;
}

void cStudent::Accessor() {
    cout << "\nYear: " << year;
}

void cStudent::Mutator() {
    cout << "Enter Year:";
    cin.getline(year, 100);
}

