#include "cFaculty.h"

cFaculty::cFaculty() {
    office = new char [100];
    hours = new char [100];
    rank = new char [100];
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
