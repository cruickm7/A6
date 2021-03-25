#include "cStaff.h"

cStaff::cStaff() {
    title = new char [100];
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