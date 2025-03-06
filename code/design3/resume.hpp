#ifndef RESUME_HPP
#define RESUME_HPP

#include <string>

class Resume {
private:
    std::string name, contact; 
    std::string school = "University of Toronto Scarborough";
    std::string department = "Computer Science";
protected:  // members accessible by derived classes but not from outside
    int ne = 0;
    std::string entries[50];
public:
    Resume(std::string name, std::string contact);
    void addEntry(std::string entry);
    virtual void print();
    virtual ~Resume();
};

#endif
