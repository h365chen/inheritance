#include "tresume.hpp"
#include <iostream>

TeachResume::TeachResume(std::string name, std::string contact) 
    : /* TODO: call base class's constructor */ {}

void TeachResume::print() {
    /* TODO: complete the method */ 
    for (int i = 0; i < this->ne; i++) {
        std::cout << "* " << this->entries[i] << std::endl;
    }
}

TeachResume::~TeachResume() {}
