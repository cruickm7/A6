#include "cStaff.h"

cStaff::cStaff() {
    title = new char [100];
}

cStaff::cStaff(char *na, char *ad, char *ph, char *em, char *of, char *sa, char *d0, char *ti):cEmployee(na, ad, ph, em, of, sa, d0) {  //Creates then assigns variables
    title = new char [100];
    strcpy(title, ti);
}

cStaff::~cStaff() {
    delete title;
}
void cStaff::Accessor() {
    cout << "\nTitle: " << title;
}

void cStaff::Mutator() {
    cout << "Enter Title:";
    cin.getline(title, 100);
}

void cStaff::ToString() {
    cPerson::Accessor();
    cEmployee::Accessor();
    Accessor();
}