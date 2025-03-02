#include "iresume.hpp"
#include <iostream>

IndustryResume::IndustryResume(std::string name, std::string contact) 
    : name(name), contact(contact) {}

void IndustryResume::addEntry(std::string entry) {
    this->entries[this->ne] = entry;
    this->ne++;
}

void IndustryResume::print() {
    std::cout << "Name: " << this->name << std::endl;
    std::cout << "Contact: " << this->contact << std::endl;
    std::cout << "School: " << this->school << std::endl;
    std::cout << "Department: " << this->department << std::endl;

    std::cout << "Work Experiences:" << std::endl;
    for (int i = 0; i < this->ne; i++) {
        std::cout << "* " << this->entries[i] << std::endl;
    }
}

IndustryResume::~IndustryResume() {}
