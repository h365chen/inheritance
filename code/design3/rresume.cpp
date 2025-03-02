#include "rresume.hpp"
#include <iostream>

ResearchResume::ResearchResume(std::string name, std::string contact) 
    : Resume(name, contact) {}

void ResearchResume::print() {
    Resume::print();
    std::cout << "Research:" << std::endl;
    for (int i = 0; i < this->ne; i++) {
        std::cout << "* " << this->entries[i] << std::endl;
    }
}

ResearchResume::~ResearchResume() {}
