#ifndef RRESUME_HPP
#define RRESUME_HPP

#include "resume.hpp"
#include <string>

class ResearchResume : public Resume {
public:
    ResearchResume(std::string name, std::string contact);
    void print() override;
    ~ResearchResume();
};

#endif
