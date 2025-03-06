#include "resume.hpp"
#include <iostream>

Resume::Resume(std::string name, std::string contact) 
    : name(name), contact(contact) {}

void Resume::addEntry(std::string entry) {
    this->entries[this->ne] = entry;
    this->ne++;
}

void Resume::print() {
    std::cout << "Name: " << this->name << std::endl;
    std::cout << "Contact: " << this->contact << std::endl;
    std::cout << "School: " << this->school << std::endl;
    std::cout << "Department: " << this->department << std::endl;
}

Resume::~Resume() {}
