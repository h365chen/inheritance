#include "rresume.hpp"
#include <iostream>

ResearchResume::ResearchResume(std::string name, std::string contact) 
    : name(name), contact(contact) {}

void ResearchResume::addEntry(std::string entry) {
    this->entries[this->ne] = entry;
    this->ne++;
}

void ResearchResume::print() {
    std::cout << "Name: " << this->name << std::endl;
    std::cout << "Contact: " << this->contact << std::endl;
    std::cout << "School: " << this->school << std::endl;
    std::cout << "Department: " << this->department << std::endl;
    
    std::cout << "Research:" << std::endl;
    for (int i = 0; i < this->ne; i++) {
        std::cout << "* " << this->entries[i] << std::endl;
    }
}

ResearchResume::~ResearchResume() {}
