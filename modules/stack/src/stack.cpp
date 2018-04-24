// Copyright 2018 Gladyshev Alexey
#ifndef abc
#define abc
#include "include\stack.h"

//Конструктор-инициализатор
template <class ValType>
TStack<ValType>::TStack(int _size)
{
    sp = 0;
    if (_size > 0)    size = _size;
    else              size = 1;

    Arr = new ValType[size];
    
    if (Arr == NULL)    throw(Arr);
}

//Деструктор
template <class ValType>
TStack<ValType>::~TStack(void)
{
    delete[]Arr;
    Arr = NULL;
}

#endif