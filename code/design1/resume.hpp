#ifndef RESUME_HPP
#define RESUME_HPP

#include <string>

class Resume {
private:
    std::string name, contact; 
    int category;
    std::string school = "University of Toronto Scarborough";
    std::string department = "Computer Science";
    int npr = 0;
    int nwe = 0;
    std::string paperRecords[50];
    std::string workExperiences[50];
public:
    // category: 1 - ResearchResume, 2 - IndustryResume
    Resume(std::string name, std::string contact, int category);
    void addEntry(std::string entry);
    void print();
    ~Resume();
};

#endif
