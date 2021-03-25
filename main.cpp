#include <iostream>
#include "cFaculty.h"
#include "cStaff.h"
#include "cStudent.h"
using namespace std;
int main() {
    cFaculty faculty;
    cStaff staff;
    cStudent student("qwer","asdf", "ZXCv", "tyui", "hjkl");
//    cin >> staff;
    cout << student;
    return 0;
}