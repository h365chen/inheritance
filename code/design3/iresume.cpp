#include "iresume.hpp"
#include <iostream>

IndustryResume::IndustryResume(std::string name, std::string contact) 
    : Resume(name, contact) {}

void IndustryResume::print() {
    Resume::print();
    std::cout << "Work Experiences:" << std::endl;
    for (int i = 0; i < this->ne; i++) {
        std::cout << "* " << this->entries[i] << std::endl;
    }
}

IndustryResume::~IndustryResume() {}
