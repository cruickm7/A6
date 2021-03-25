#include "cPerson.h"

cPerson::cPerson() {
    name = new char [100];
    address = new char [100];
    phone = new char [100];
    email = new char [100];
}

cPerson::~cPerson() {
    delete name;
    delete address;
    delete phone;
    delete email;
}

void cPerson::Accessor() {
    cout << "\nName: " << name << "\nAddress: " << address << "\nPhone #: " << phone << "\nEmail: " << email;
}

void cPerson::Mutator() {
    cout << "Enter Name:";
    cin.getline(name, 100);
    cout << "Enter Address:";
    cin.getline(address, 100);
    cout << "Enter Phone Number:";
    cin.getline(phone, 100);
    cout << "Enter Email:";
    cin.getline(email, 100);
}
