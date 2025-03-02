#ifndef RESUME_HPP
#define RESUME_HPP

#include <string>

class Resume {
public:
    std::string name, contact; 
    std::string school = "University of Toronto Scarborough";
    std::string department = "Computer Science";
    int ne = 0;
    std::string entries[50];

    Resume(std::string name, std::string contact);
    void addEntry(std::string entry);
    virtual void print();
    ~Resume();
};

#endif
