#include "cEmployee.h"

cEmployee::cEmployee() {
    office = new char [100];
    salary = new char [100];
    doh = new char [100];
}

cEmployee::cEmployee(char *na, char *ad, char *ph, char *em, char *of, char *sa, char *d0):cPerson(na, ad, ph, em) {    //Creates then assigns variables
    office = new char [100];
    salary = new char [100];
    doh = new char [100];
    strcpy(office, of);
    strcpy(salary, sa);
    strcpy(doh, d0);
}

cEmployee::~cEmployee() {
    delete office;
    delete salary;
    delete  doh;
}

void cEmployee::Accessor() {
    cout << "\nOffice: " << office << "\nSalary: " << salary << "\nDate of Hire: " << doh;
}

void cEmployee::Mutator() {
    cout << "Enter Office:";
    cin.getline(office, 100);
    cout << "Enter Salary:";
    cin.getline(salary, 100);
    cout << "Enter Date of Hire:";
    cin.getline(doh, 100);
}

void cEmployee::ToString() {
    cPerson::Accessor();
    Accessor();
}
