//для queue тестово реализуем метод в минимальном исполнении
#include "queue.h"
#include <stdexcept>

void Queue::push(int value) {
    data.push(value);
}

int Queue::pop() {
    if (data.empty()) {
        throw std::out_of_range("Queue is empty");
    }

    int value = data.front();
    data.pop();
    return value;
}

bool Queue::empty() const {
    return data.empty();
}

size_t Queue::size() const {
    return data.size();
}