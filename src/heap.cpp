#include "heap.h"
#include <stdexcept>

void Heap::push(int value) {
}

int Heap::pop() {
    throw std::out_of_range("Not implemented");
}

bool Heap::empty() const {
    return true;
}

size_t Heap::size() const {
    return 0;
}