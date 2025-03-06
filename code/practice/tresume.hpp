#ifndef TRESUME_HPP
#define TRESUME_HPP

#include "resume.hpp"
#include <string>

class TeachResume : /* TODO: add access specifier */ Resume {
public:
    TeachResume(std::string name, std::string contact);
    void print() override;
    ~TeachResume();
};

#endif
