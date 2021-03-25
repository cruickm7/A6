#include <iostream>
#include "cFaculty.h"
#include "cStaff.h"
#include "cStudent.h"
using namespace std;
int main() {
    cFaculty faculty("Homer Simpson", "742 Evergreen Terrace", "555-3226", "Homer.Simpson@aol.com", "Springfield Nuclear Power PLant", "$24,395", "Episode 3", "Sector 7G", "9-5", "Nuclear Safety Inspector");
    cStaff staff("Ned Flanders", "744 Evergreen Terrace", "555-8904", "ned.flanders@springface.com", "The Leftorium", "$300,000", "Episode 38", "Owner");
    cStudent student("Bart Simpson","742 Evergreen Terrace", "555-6832", "ElBarto@hotmail.com", "Grade 3");
    cout << faculty << endl;
    cout << staff << endl;
    cout << student << endl;
    return 0;
}