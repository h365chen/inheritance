#include "resume.hpp"
#include <iostream>

Resume::Resume(std::string name, std::string contact, int category) 
    : name(name), contact(contact), category(category) {}

void Resume::addEntry(std::string entry) {
    if (this->category == 1) {
        this->paperRecords[this->npr] = entry;
        this->npr++;
    } else if (this->category == 2) {
        this->workExperiences[this->nwe] = entry;
        this->nwe++;
    }
}

void Resume::print() {
    std::cout << "Name: " << this->name << std::endl;
    std::cout << "Contact: " << this->contact << std::endl;
    std::cout << "School: " << this->school << std::endl;
    std::cout << "Department: " << this->department << std::endl;
    if (this->category == 1) {
        std::cout << "Research:" << std::endl;
        for (int i = 0; i < this->npr; i++) {
            std::cout << "* " << this->paperRecords[i] << std::endl;
        }
    } else if (this->category == 2) {
        std::cout << "Work Experiences:" << std::endl;
        for (int i = 0; i < this->nwe; i++) {
            std::cout << "* " << this->workExperiences[i] << std::endl;
        }
    }
}

Resume::~Resume() {}
