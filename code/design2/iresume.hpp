#ifndef IRESUME_HPP
#define IRESUME_HPP

#include <string>

class IndustryResume {
private:
    std::string name, contact; 
    std::string school = "University of Toronto Scarborough";
    std::string department = "Computer Science";
    int ne = 0;
    std::string entries[50];
public:
    IndustryResume(std::string name, std::string contact);
    void addEntry(std::string entry);
    void print();
    ~IndustryResume();
};

#endif
