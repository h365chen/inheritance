#ifndef IRESUME_HPP
#define IRESUME_HPP

#include "resume.hpp"
#include <string>

class IndustryResume : public Resume {
public:
    IndustryResume(std::string name, std::string contact);
    void print() override;
    ~IndustryResume();
};

#endif
