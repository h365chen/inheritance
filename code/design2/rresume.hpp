#ifndef RRESUME_HPP
#define RRESUME_HPP

#include <string>

class ResearchResume {
private:
    std::string name, contact; 
    std::string school = "University of Toronto Scarborough";
    std::string department = "Computer Science";
    int ne = 0;
    std::string entries[50];
public:
    ResearchResume(std::string name, std::string contact);
    void addEntry(std::string entry);
    void print();
    ~ResearchResume();
};

#endif
