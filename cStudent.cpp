#include "cStudent.h"

cStudent::cStudent():cPerson(){
    year = new char[100];
}
cStudent::cStudent(char *na, char *ad, char *ph, char *em, char *ye):cPerson(na, ad, ph, em){
    year = new char[100];
    strcpy(year, ye);
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
void cStudent::ToString() {
    cPerson::Accessor();
    Accessor();
}

