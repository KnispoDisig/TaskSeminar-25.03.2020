//
// Created by fell2 on 25.03.2020.
//

#ifndef SEMTASK_ARRAY_H
#define SEMTASK_ARRAY_H

template <class T>
class Array {
private:
    int size;
    T* items;
public:
    Array(T* items);
    void addItem(T item);
};

#endif //SEMTASK_ARRAY_H
