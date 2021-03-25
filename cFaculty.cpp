#include "cFaculty.h"

cFaculty::cFaculty() {
    office = new char [100];
    hours = new char [100];
    rank = new char [100];
}

cFaculty::cFaculty(char *na, char *ad, char *ph, char *em, char *of, char *sa, char *d0, char *of2, char *ho,char *ra):cEmployee(na, ad, ph, em, of, sa, d0) {
    office = new char [100];
    hours = new char [100];
    rank = new char [100];
    strcpy(office, of2);
    strcpy(hours, ho);
    strcpy(rank, ra);
}

cFaculty::~cFaculty() {
    delete office;
    delete hours;
    delete rank;
}
void cFaculty::Accessor() {
    cout << "\nOffice: " << office << "\nHours: " << hours << "\nRank: " << rank;
}

void cFaculty::Mutator() {
    cout << "Enter Office:";
    cin.getline(office, 100);
    cout << "Enter Hours:";
    cin.getline(hours, 100);
    cout << "Enter Rank:";
    cin.getline(rank, 100);
}

void cFaculty::ToString() {
    cPerson::Accessor();
    cEmployee::Accessor();
    Accessor();
}

