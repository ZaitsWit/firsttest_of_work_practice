#include <gtest/gtest.h>
#include "heap.h"

TEST(HeapTest, NewHeapIsEmpty) {
    Heap h;

    EXPECT_TRUE(h.empty());
    EXPECT_EQ(h.size(), 0);
}

TEST(HeapTest, PushIncreasesSize) {
    Heap h;

    h.push(10);

    EXPECT_FALSE(h.empty());
    EXPECT_EQ(h.size(), 1);
}

TEST(HeapTest, PopReturnsElementsInPriorityOrder) {
    Heap h;

    h.push(10);
    h.push(50);
    h.push(20);

    EXPECT_EQ(h.pop(), 50);
    EXPECT_EQ(h.pop(), 20);
    EXPECT_EQ(h.pop(), 10);
}

TEST(HeapTest, PopFromEmptyThrowsException) {
    Heap h;

    EXPECT_THROW(h.pop(), std::out_of_range);
}