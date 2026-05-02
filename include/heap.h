#pragma once
#include <stdexcept>

class Heap {
public:
    void push(int value);
    int pop(); // возвращает максимум или минимум

    bool empty() const;
    size_t size() const;
};