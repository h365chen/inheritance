#include <iostream>
#include "resume.hpp"

using namespace std;

int main() {
    string student = "John Doe";
    string contact = "john.doe@example.com";

    Resume researchResume = Resume(student, contact, 1);
    researchResume.addEntry("Using Comics to Illustrate Software Design Principles, 2024");
    researchResume.addEntry("Time Complexity Analysis on Common Algorithms, 2023");

    Resume industryResume = Resume(student, contact, 2);
    industryResume.addEntry("Developed a mobile app - Led a team using Flutter.");
    industryResume.addEntry("Web development project - Built a responsive app with React.");
    industryResume.addEntry("Algorithm optimization - Improved performance by 30%.");

    cout << "----------------------------------------------------------------------------------" << endl;
    researchResume.print();
    cout << "----------------------------------------------------------------------------------" << endl;
    industryResume.print();
    cout << "----------------------------------------------------------------------------------" << endl;

    return 0;
}
