//
// Created by fell2 on 25.03.2020.
//

#include <string>
#include "Student.h"

Student::Student(std::string name, std::string group) {
    this->name = name;
    this->group = group;
}

std::string Student::getName() {
    return this->name;
}

std::string Student::getGroup() {
    return this->group;
}
