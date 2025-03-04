#include <iostream>
#include "iresume.hpp"
#include "rresume.hpp"
#include "tresume.hpp"

using namespace std;

int main() {
    string student = "John Doe";
    string contact = "john.doe@example.com";

    ResearchResume researchResume = ResearchResume(student, contact);
    researchResume.addEntry("Using Comics to Illustrate Software Design Principles, 2024");
    researchResume.addEntry("Time Complexity Analysis on Common Algorithms, 2023");

    IndustryResume industryResume = IndustryResume(student, contact);
    industryResume.addEntry("Developed a mobile app - Led a team using Flutter.");
    industryResume.addEntry("Web development project - Built a responsive app with React.");
    industryResume.addEntry("Algorithm optimization - Improved performance by 30%.");

    TeachResume teachResume = TeachResume(student, contact);
    teachResume.addEntry("Taught CSCB07 in the year 2024-2025.");

    cout << "----------------------------------------------------------------------------------" << endl;
    researchResume.print();
    cout << "----------------------------------------------------------------------------------" << endl;
    industryResume.print();
    cout << "----------------------------------------------------------------------------------" << endl;
    teachResume.print();
    cout << "----------------------------------------------------------------------------------" << endl;

    return 0;
}
