//
// Created by fell2 on 25.03.2020.
//

#include <memory.h>
#include <malloc.h>
#include "Array.h"
#include <iostream>
#include "Student.h"

template<class T>
Array<T>::Array() {
    this->size = 0;
    this->items = nullptr;
}

template<class T>
Array<T>::Array(T *items, int size) {
    if (size > 0) {
        this->size = size;
        this->items = new T[size];
        for (int i = 0; i < size; i++) {
            this->items[i] = items[i];
        }
    } else {
        this->items = nullptr;
        this->size = 0;
    }
}

template<class T>
void Array<T>::addItem(T item) {
    if (this->items != nullptr) {
        T *temp = new T[this->size + 1];
        for (int i = 0; i < size; i++) {
            temp[i] = this->items[i];
        }
        size += 1;
        temp[size - 1] = item;

        delete this->items;
        this->items = temp;
    } else {
        this->items = new T[1];
        this->items[0] = item;
        this->size = 1;
    }
}


template<class T>
T *Array<T>::getItems() {
    return this->items;
}

template<class T>
void Array<T>::printItems() {
    for (int i = 0; i < this->size; ++i) {
        std::cout << this->items[i]->getName() << "\t" << this->items[i]->getGroup() << std::endl;
    }
}

template<class T>
int Array<T>::deleteByIndex(int index) {
    T* temp = new T[this->size - 1];

    if (index > 0 && index < this->size) {
        for (int i = index + 1; i < this->size; i++) {
            this->items[i - 1] = this->items[i];
        }
        this->size -= 1;

        for (int i = 0; i < this->size; i++) {
            temp[i] = this->items[i];
        }

    } else if (index == 0) {
        for (int i = 1; i < this->size; i++) {
            temp[i-1] = this->items[i];
        }
        this->size -= 1;
    } else {
        std::cout << "Index is invalid" << std::endl;
        return -1;
    }

    delete this->items;
    this->items = temp;
    return 1;
}

template<class T>
void Array<T>::deleteByGroup(std::string groupNum) {
    Array *tempArr = new Array();

    for (int i = 0; i < this->size; i++) {
        if (this->items[i]->getGroup() != groupNum) {
            tempArr->addItem(this->items[i]);
        }
    }

    this->items = tempArr->items;
    this->size = tempArr->size;

    delete tempArr;
}



