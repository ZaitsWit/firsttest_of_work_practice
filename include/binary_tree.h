#pragma once
#include <cstddef>

class BinaryTree {
public:
    void push(int value);
    bool search(int value) const;
    bool pop(int value);

    bool empty() const;
    size_t size() const;
};