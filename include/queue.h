#pragma once

#include <cstddef>
#include <queue>

class Queue {
private:
    std::queue<int> data;

public:
    void push(int value);
    int pop();

    bool empty() const;
    size_t size() const;
};