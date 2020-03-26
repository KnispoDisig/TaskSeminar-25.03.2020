//
// Created by fell2 on 25.03.2020.
//

#ifndef SEMTASK_ARRAY_H
#define SEMTASK_ARRAY_H

#include <string>

template <class T>
class Array {
private:
    int size;
    T* items;
public:
    Array();
    Array(T* items, int size);
    void addItem(T item);
    T* getItems();
    void printItems();
    int deleteByIndex(int index);
    void deleteByGroup(std::string group);
};

#endif //SEMTASK_ARRAY_H
