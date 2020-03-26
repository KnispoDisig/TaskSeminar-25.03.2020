//
// Created by fell2 on 25.03.2020.
//

#ifndef SEMTASK_STUDENT_H
#define SEMTASK_STUDENT_H


class Student {
private:
    std::string name;
    std::string group;
public:
    Student(std::string name, std::string group);
    std::string getName();
    std::string getGroup();
};


#endif //SEMTASK_STUDENT_H
