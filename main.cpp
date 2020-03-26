#include <iostream>
#include "Student.h"
#include "Array.cpp"

int main() {
    Student **students = new Student*[5];
    
    students[0] = new Student("Mark", "514");
    students[1] = new Student("Lesha", "504");
    students[2] = new Student("Ivan", "513");
    students[3] = new Student("Klim", "514");
    students[4] = new Student("Sasha", "505");

    Array<Student*> *array = new Array<Student*>(students, 5);

    std::cout << "Start array" << std::endl;
    array->printItems();   //вывод созданного массива
    std::cout << std::endl;

    std::cout << "Denis added" << std::endl;
    array->addItem(new Student("Denis", "514"));  //добавил дениса
    array->printItems();
    std::cout << std::endl;

    std::cout << "Deleting" << std::endl;
    array->deleteByIndex(0);  //удалил себя
    array->deleteByIndex(3); //удалил из середины
    array->printItems();
    std::cout << std::endl;

    std::cout << "Deleting students from 514th group" << std::endl;
    array->deleteByGroup("514");  //удалил всех, кто из 514-ой
    array->printItems();

    return 0;
}
