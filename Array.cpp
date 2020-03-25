//
// Created by fell2 on 25.03.2020.
//

#include <memory.h>
#include <malloc.h>
#include "Array.h"

template<class T>
Array<T>::Array(T *items) {
    this->size = sizeof(items) / sizeof(T);
    this->items = malloc(sizeof(items));
    memcpy(this->items, items, sizeof(items));
}

template<class T>
void Array<T>::addItem(T item) {
    this->items = realloc(this->items, (this->size + 1) * sizeof(T));
    *(this->items + this->size + 1) = item;
}
